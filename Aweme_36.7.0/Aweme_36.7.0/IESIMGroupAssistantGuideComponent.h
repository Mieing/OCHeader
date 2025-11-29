@interface IESIMGroupAssistantGuideComponent : AWEIMComponentBase <IESIMGroupAssistantGuideServiceDelegate> {
    void /* unknown type, empty encoding */ didFirstViewDidAppear;
    void /* unknown type, empty encoding */ lastUnreadCount;
}

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)groupAssistantGuideService:(id)a0 needReCheckEnableInsertWithType:(unsigned long long)a1 conversationId:(id)a2;
- (id)init;
- (void)dealloc;

@end
