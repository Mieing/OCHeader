@class CAGradientLayer, NSString, MMLiveTaskId, UIView, MMLiveBeautyOperationContainerView;
@protocol MMFinderLivePreviewCameraViewControllerDelegate;

@interface MMFinderLivePreviewCameraViewController : MMUIViewController <UIGestureRecognizerDelegate, MMLiveBeautyOperationContainerViewDelegate>

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (weak, nonatomic) id<MMFinderLivePreviewCameraViewControllerDelegate> delegate;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) MMLiveBeautyOperationContainerView *beautyContainerView;
@property (retain, nonatomic) UIView *activeRenderTargetView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 activeRenderTargetView:(id)a1 delegate:(id)a2;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)layoutUI;
- (void)onMMLiveBeautyOperationContainerViewClose:(BOOL)a0;
- (id)liveTask;
- (void)onTapBg;
- (void).cxx_destruct;

@end
