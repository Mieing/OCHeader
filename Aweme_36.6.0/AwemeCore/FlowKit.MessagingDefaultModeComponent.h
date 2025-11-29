@interface FlowKit.MessagingDefaultModeComponent : FlowCommon.TightCouplingComponent <FlowIMX.FlowIMBotServiceDelegate, UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ inputViewControl;
    void /* unknown type, empty encoding */ _viewController;
    void /* unknown type, empty encoding */ _inputViewComponent;
    void /* unknown type, empty encoding */ _imageAttachmentComponent;
    void /* unknown type, empty encoding */ _inputViewDelegateComponent;
    void /* unknown type, empty encoding */ _attachmentViewComponent;
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ isLandingEduCamera;
    void /* unknown type, empty encoding */ $__lazy_storage_$_expandedActionBar;
    void /* unknown type, empty encoding */ $__lazy_storage_$_albumService;
    void /* unknown type, empty encoding */ albumVCIsAppear;
    void /* unknown type, empty encoding */ isFetchedAlbumAsset;
    void /* unknown type, empty encoding */ beginFetchPhotoAlbumTimestamp;
    void /* unknown type, empty encoding */ $__lazy_storage_$_albumStyle;
    void /* unknown type, empty encoding */ albumIdentifier;
    void /* unknown type, empty encoding */ $__lazy_storage_$_albumView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_albumPermissionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomSkeletonView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_albumTransition;
    void /* unknown type, empty encoding */ $__lazy_storage_$_panGesture;
    void /* unknown type, empty encoding */ $__lazy_storage_$_swipGesture;
    void /* unknown type, empty encoding */ $__lazy_storage_$_albumVC;
}

- (void)botInfoDidChange:(id)a0 updateBotType:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)handlePanGesture:(id)a0;
- (void)handleSwipe:(id)a0;

@end
