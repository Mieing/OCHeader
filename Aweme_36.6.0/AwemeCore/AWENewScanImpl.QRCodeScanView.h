@interface AWENewScanImpl.QRCodeScanView : UIView <NSObject> {
    void /* unknown type, empty encoding */ item;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ gesturesForSDK;
    void /* unknown type, empty encoding */ goodsAlbumFromBottomExtend;
    void /* unknown type, empty encoding */ $__lazy_storage_$_fullscreenView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_couponView;
    void /* unknown type, empty encoding */ cameraContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_flashlightView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_badNetworkView;
}

- (void)flashButtonTapped;
- (void)doubleClickZoomActionWithRecognizer:(id)a0;
- (void)handlePinchGestureForZoomWithPinch:(id)a0;
- (void)handleSingleTapGestureWithSingleTapGesture:(id)a0;
- (void)qrCodeButtonTapped;
- (void)albumButtonTapped;
- (void)goodsAlbumButtonTapped;
- (void)goodsShootButtonTapped;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
