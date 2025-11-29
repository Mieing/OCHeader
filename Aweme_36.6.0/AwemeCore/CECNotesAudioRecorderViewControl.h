@class CECNotesAudioRecorderGradientAnimationView, CECNotesAudioRecorderViewModel, CECNotesAudioRecorderTitleView;

@interface CECNotesAudioRecorderViewControl : NSObject

@property (retain, nonatomic) CECNotesAudioRecorderGradientAnimationView *cancelView;
@property (weak, nonatomic) CECNotesAudioRecorderViewModel *viewModel;
@property (nonatomic) unsigned long long preState;
@property (nonatomic) unsigned long long currentState;
@property (retain, nonatomic) CECNotesAudioRecorderTitleView *titleView;

- (void)addViewModelKVO;
- (id)getSubViewWithType:(unsigned long long)a0;
- (void)prepareToStopAllOtherWithPreState:(unsigned long long)a0 currentState:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (id)allViews;
- (void)dealloc;

@end
