@interface IESIMTickleImpl.TickleService : HTSService <IESIMTickleService> {
    void /* unknown type, empty encoding */ animationPlayers;
    void /* unknown type, empty encoding */ frequentCidUids;
}

- (void)cancelAllTickleAnimation;
- (void)cancelTickleAnimationForMessageViewModel:(id)a0;
- (long long)readedMaxTickleGlobalIndexForCon:(id)a0;
- (void)setReadedMaxTickleGlobalIndex:(long long)a0 con:(id)a1 completion:(id /* block */)a2;
- (void)tickleElfWidgetView:(id)a0 conversation:(id)a1 elfUser:(id)a2 completion:(id /* block */)a3;
- (void)playTickleElfWidgetView:(id)a0 triggerMessage:(id)a1 completion:(id /* block */)a2;
- (BOOL)tickleActiveState;
- (BOOL)ticklePassiveState;
- (BOOL)isBeTickledMessage:(id)a0;
- (BOOL)isTickleFromMe:(id)a0;
- (BOOL)enableTickleForConversation:(id)a0;
- (BOOL)enableTickleForConversation:(id)a0 fromUser:(id)a1 message:(id)a2;
- (void)tickleAvatarView:(id)a0 messageViewModel:(id)a1 extraParams:(id)a2 completion:(id /* block */)a3;
- (void)playTickleAvatarView:(id)a0 targetMessageViewModel:(id)a1 triggerMessageViewModel:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;

@end
