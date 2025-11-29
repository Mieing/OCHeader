@interface AWEHogwartsSwiftImpl.RTVLiveCommunicationKitImpl : HTSService <RTVLiveCommunicationKitService> {
    void /* unknown type, empty encoding */ userTriggerActions;
    void /* unknown type, empty encoding */ conversionManager;
    void /* unknown type, empty encoding */ activeRoomContexts;
    void /* unknown type, empty encoding */ $__lazy_storage_$_enableWaitConversation;
    void /* unknown type, empty encoding */ $__lazy_storage_$_fixcrash;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ userActionLock;
}

@property (nonatomic, weak) void /* function */ delegate;

- (void)reportEnd:(id)a0 reason:(long long)a1;
- (void)syncUserActionToSystem:(id)a0;
- (void)reportWithContext:(id)a0;
- (id)currentDisplayingRoomIDs;
- (BOOL)isCurrentRoomIDDisplaying:(id)a0;
- (void)startConversationInLaunchTask:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)endCurrentConversation;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isDisplaying;

@end
