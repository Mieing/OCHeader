@interface AWEStudioExtFriendsImpl.StoryCinemaModeEditFilterLogicComponent : NSObject <ACCPanelViewDelegate, ACCSequenceEditServicePlayerSubscriber, ACCEditSessionLifeCircleEvent, ACCEditBuildListener> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ $__lazy_storage_$_filterEditInject;
    void /* unknown type, empty encoding */ $__lazy_storage_$_filterPanel;
    void /* unknown type, empty encoding */ _showEffectModelPublisher;
    void /* unknown type, empty encoding */ cancels;
    void /* unknown type, empty encoding */ cancellable;
    void /* unknown type, empty encoding */ hasBindInViewWillAppear;
    void /* unknown type, empty encoding */ _hasClickCancelPublisher;
    void /* unknown type, empty encoding */ animationViews;
    void /* unknown type, empty encoding */ isViewAppear;
    void /* unknown type, empty encoding */ mediaBottomViewShowWhenDisappear;
    void /* unknown type, empty encoding */ mediaBottomPlayControlIsHiddenBeforeShowSlider;
    void /* unknown type, empty encoding */ mediaBottomIndicatorIsHiddenBeforeShowSlider;
}

- (void)panelViewController:(id)a0 didShowPanelView:(id)a1;
- (void)onEditContainerHitViewNotify:(id)a0;
- (void)onNetworkChanged;
- (void)sequenceEditService:(id)a0 didTransferToIndex:(long long)a1 editMode:(unsigned long long)a2 isAutoTransfer:(BOOL)a3;
- (void)sensorialRenderWithEditService:(id)a0;
- (void)onCreateEditSessionCompletedWithEditService:(id)a0;
- (void)onEditSessionInit:(id)a0;
- (void)onNLEEditorInit:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
