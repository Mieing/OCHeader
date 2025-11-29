@class NSString, AWEMVChannelProgressView;

@interface AWEMVChannelPlayerCardProgressController : AWEMVChannelPlayerCardBaseController <AWEMVChannelProgressViewDelegate>

@property (retain, nonatomic) AWEMVChannelProgressView *progressView;
@property (nonatomic) BOOL shouldResponsePanGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)a0 updatePlayTime:(double)a1 canPlayTime:(double)a2 totalTime:(double)a3;
- (void)seekToPlayTime:(double)a0 completion:(id /* block */)a1;
- (BOOL)shouldResponseGestureRecognizer:(id)a0;
- (BOOL)handleResponseGestureRecognizer:(id)a0;
- (void)progressViewTouchBegan:(double)a0;
- (void)progressViewTouchChanged:(double)a0;
- (void)progressViewTouchEnded:(double)a0 bySlideScreen:(BOOL)a1;
- (void)updateState:(long long)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)reset;
- (void)viewDidLoad;

@end
