@interface FlowKit.MessagingUnreadComponent : FlowCommon.TightCouplingComponent <FlowProvider.FlowUnReadCountDelegate> {
    void /* unknown type, empty encoding */ _viewController;
    void /* unknown type, empty encoding */ _navigationBarBackComponent;
    void /* unknown type, empty encoding */ _unreadProvider;
    void /* unknown type, empty encoding */ displayUnreadCount;
    void /* unknown type, empty encoding */ outerUnreadCount;
}

- (void)conversationUnreadChanged:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
