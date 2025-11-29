@class AWEIMRichRecorderViewModel, NSMutableDictionary, AWEIMRichRecorderGradientAnimationView, AWEIMRecorderVolumeIncreaseView, AWEIMRichRecorderTitleView;

@interface AWEIMRichRecorderViewControl : NSObject

@property (retain, nonatomic) AWEIMRichRecorderViewModel *viewModel;
@property (nonatomic) unsigned long long preState;
@property (nonatomic) unsigned long long currentState;
@property (retain, nonatomic) NSMutableDictionary *stateObservers;
@property (retain, nonatomic) AWEIMRichRecorderTitleView *titleView;
@property (retain, nonatomic) AWEIMRichRecorderGradientAnimationView *cancelView;
@property (retain, nonatomic) AWEIMRecorderVolumeIncreaseView *volumeIncreaseView;

- (void)addViewModelKVO;
- (id)getSubViewWithType:(unsigned long long)a0;
- (void)prepareToStopAllOtherWithPreState:(unsigned long long)a0 currentState:(unsigned long long)a1;
- (void)addView:(id)a0 forState:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (id)allViews;

@end
