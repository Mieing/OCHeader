@interface IESLiveSwiftMemberUserEnterNodeProcessor : IESLiveUserEnterNodeProcessor <IESLivePrivilegeUserEnterRouter> {
    void /* unknown type, empty encoding */ viewFactory;
    void /* unknown type, empty encoding */ order;
    void /* unknown type, empty encoding */ afterDelayTime;
    void /* unknown type, empty encoding */ pendingQueue;
    void /* unknown type, empty encoding */ processMessageIDList;
    void /* unknown type, empty encoding */ optimizeFluency;
    void /* unknown type, empty encoding */ ecomFansclubEnable;
    void /* unknown type, empty encoding */ maxRetryCount;
    void /* unknown type, empty encoding */ userService;
}

- (void)didSetAttachingDIContext;
- (void)sendPrivilegeUserEnterTraceEventWithStep:(id)a0 extra:(id)a1 message:(id)a2;
- (id)createNodeWithMessage:(id)a0;
- (BOOL)enableUserEnterWithMessage:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewFrameWithNode:(id)a0;
- (void)createNodeViewWithNode:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 completion:(id /* block */)a2;
- (void)nodeViewDidClickedWithNode:(id)a0;
- (void)nodeViewDidAddedToContainerWithNode:(id)a0;
- (BOOL)isInValidTime:(id)a0;
- (id)generateTraceID;
- (void).cxx_destruct;
- (id)init;

@end
