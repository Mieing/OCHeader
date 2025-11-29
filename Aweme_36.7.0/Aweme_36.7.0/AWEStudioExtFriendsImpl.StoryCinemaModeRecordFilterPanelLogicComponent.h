@interface AWEStudioExtFriendsImpl.StoryCinemaModeRecordFilterPanelLogicComponent : NSObject <ACCRecorderViewContainerItemsHideShowObserver, ACCRecorderViewContainerEventObserver, AWERecordBeautyServiceSubscriberProtocol, ACCPanelViewDelegate, ACCRecordFlowServiceSubscriber> {
    void /* unknown type, empty encoding */ _hasClickCancelPublisher;
    void /* unknown type, empty encoding */ $__lazy_storage_$_customInject;
    void /* unknown type, empty encoding */ $__lazy_storage_$_panelContext;
    void /* unknown type, empty encoding */ animationViews;
    void /* unknown type, empty encoding */ cancels;
    void /* unknown type, empty encoding */ context;
}

- (void)shouldItemsShow:(BOOL)a0 animated:(BOOL)a1;
- (void)updateItemsHiddenWithAnimation:(BOOL)a0;
- (void)viewContainerInteractionViewDidHitView:(id)a0 point:(struct CGPoint { double x0; double x1; })a1 event:(id)a2;
- (void)beautyPanelViewDidAppear;
- (void)panelViewController:(id)a0 didShowPanelView:(id)a1;
- (void)flowServiceStateDidChanged:(unsigned long long)a0 preState:(unsigned long long)a1;
- (void)flowServiceWillBeginTakePicture;
- (void)onNetworkChanged;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
