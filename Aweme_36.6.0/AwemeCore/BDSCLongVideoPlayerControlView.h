@class BDWebImageRequest, NSString;

@interface BDSCLongVideoPlayerControlView : BDSCBaseVideoPlayerControlView <UIGestureRecognizerDelegate>

@property (nonatomic) BOOL didTapButton;
@property (retain, nonatomic) BDWebImageRequest *imageRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)singleTapped;
- (void)refreshUISettings;
- (void)changeToFail;
- (void)changeToSuccess;
- (id)createVideoActionView;
- (void)configBackgroundImageViewWithSuccess:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)setupViews;
- (void)rebuildConstraints;
- (void)updateSubviews;

@end
