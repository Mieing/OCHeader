@interface IESIMHeavyUserMonitorService : NSObject <AWEIMComponentManagerDependency, IESIMHeavyUserMonitorService> {
    void /* unknown type, empty encoding */ serviceEnable;
    void /* unknown type, empty encoding */ $__lazy_storage_$_componentManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_context;
}

- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)reportEnterIMPageWithScene:(id)a0;
- (void)reportLeaveIMPageWithScene:(id)a0;
- (void)reportEnterIMPageFromConversationScene;
- (void)reportLeaveIMPageFromConversationScene;
- (BOOL)shouldMonitorIMStateInIMPage;
- (void)run;
- (id)userTag;
- (void).cxx_destruct;
- (id)init;

@end
