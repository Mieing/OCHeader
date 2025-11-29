@class AWEListenFeedPlayControlView, CADisplayLink;

@interface AWEListenFeedPlayControlElement : AWEListenFeedInteractionBaseElement

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) BOOL isCheckErrorStatus;
@property (retain, nonatomic) AWEListenFeedPlayControlView *controlView;

- (void)updateWithModel:(id)a0 playModel:(id)a1 extendModelArray:(id)a2 mixVideoModel:(id)a3 currentModelIndex:(long long)a4 context:(id)a5;
- (void)updateWithModel:(id)a0 playModel:(id)a1 context:(id)a2;
- (void)prepareForReuseVC;
- (void)__playResumeDisplayLink;
- (void)__resetDisplayLink;
- (void)p_updateWithModel:(id)a0 playModel:(id)a1 extendModelArray:(id)a2 context:(id)a3;
- (void)doSafeDigg;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)didEndDisplaying;
- (void)willDisplay;

@end
