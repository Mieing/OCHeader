@class UIImageView, NSString, UIView;
@protocol AFDCameraViewLayoutProtocol;

@interface AFDCloseFriendsPlaceHolderView : UIView <AFDCloseFriendsPlaceHolderViewProtocol>

@property (retain, nonatomic) id<AFDCameraViewLayoutProtocol> layoutManager;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *preview;
@property (retain, nonatomic) UIView *captureButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cameraPreviewViewFrame;
- (void)cameraConfig;
- (void)bindObserver;
- (double)captureButtonOffestY;
- (double)recordButtonBottomOffset;
- (void)reloadCachedImage;
- (double)momentCameraPreviewTopMargin;
- (double)messageTabPullDownThreshold;
- (void)notice:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
