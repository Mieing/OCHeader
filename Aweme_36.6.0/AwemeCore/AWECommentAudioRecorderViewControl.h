@class AWECommentAudioRecorderBezierPathAnimationView, AWECommentAudioRecorderViewModel, AWECommentAudioRecorderTitleView, AWECommentAudioRecorderGradientAnimationView, AWECommentAudioRecorderVolumeIncreaseView;

@interface AWECommentAudioRecorderViewControl : NSObject

@property (retain, nonatomic) AWECommentAudioRecorderGradientAnimationView *cancelView;
@property (weak, nonatomic) AWECommentAudioRecorderViewModel *viewModel;
@property (retain, nonatomic) AWECommentAudioRecorderBezierPathAnimationView *animationView;
@property (nonatomic) unsigned long long preState;
@property (nonatomic) unsigned long long currentState;
@property (retain, nonatomic) AWECommentAudioRecorderTitleView *titleView;
@property (retain, nonatomic) AWECommentAudioRecorderVolumeIncreaseView *volumeIncreaseView;
@property (retain, nonatomic) AWECommentAudioRecorderTitleView *sendTitleView;
@property (retain, nonatomic) AWECommentAudioRecorderGradientAnimationView *sendView;

- (void)addViewModelKVO;
- (id)getSubViewWithType:(unsigned long long)a0;
- (void)prepareToStopAllOtherWithPreState:(unsigned long long)a0 currentState:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (id)allViews;
- (void)dealloc;

@end
