@class MMSightRecordView, UIImageView, CAAnimationGroup, UIButton;
@protocol CameraScanOCRContentViewDelegate;

@interface CameraScanOCRContentView : CameraScanBaseContentView {
    double _scanLineTopCenterY;
    double _scanLineBottomCenterY;
}

@property (retain, nonatomic) UIButton *takePhotoButton;
@property (retain, nonatomic) MMSightRecordView *takePhotoView;
@property (retain, nonatomic) UIImageView *scanLineView;
@property (retain, nonatomic) CAAnimationGroup *scanLineAnimation;
@property (weak, nonatomic) id<CameraScanOCRContentViewDelegate> delegate;

- (id)init;
- (void)setupSubViews;
- (void)setupTakePhotoButton;
- (void)setupTakePhotoView;
- (void)setupScanLineView;
- (void)layoutSubviews;
- (void)showTakePhotoButton;
- (void)hiddenTakePhotoButton;
- (void)onTakePhotoBtnClicked:(id)a0;
- (void)onTakePhotoBtnPressed:(id)a0;
- (void)startScanLineAnimation;
- (void)stopScanLineAnimation;
- (void)setCloseButtonBottom:(double)a0 infoLableTop:(double)a1;
- (void).cxx_destruct;

@end
