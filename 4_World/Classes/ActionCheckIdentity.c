// #ifdef CheckIdentity
modded class ActionCheckIdentity {
    override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item) {
        EntityAI targetEntity = EntityAI.Cast(target.GetObject());
        bool isTrader = false;

        if (targetEntity && targetEntity.IsPlayer()) {
            PlayerBase targetPlayer = PlayerBase.Cast(target.GetObject());
            CIConfig config = GetDayZGame().GetCheckIdentityConfig();
            isTrader = targetPlayer.TraderID != -1;
			
            if (!isTrader){
                m_ActionTypeText = "Check Identity";
                m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_INTERACTONCE;
                return true;
            }
        }
        return false;
    }
}
// #endif