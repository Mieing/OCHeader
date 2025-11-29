@class HTSEventContext, LOTAnimationView, IESLivePSComponentConfigModel, UILabel;

@interface IESLiveAnchorSpeechCommentView : UIView <IESLivePSComponentViewProtocol>

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) LOTAnimationView *waveView;
@property (copy, nonatomic) id /* block */ allAnimationFinished;
@property (retain, nonatomic) IESLivePSComponentConfigModel *configModel;
@property (retain, nonatomic) HTSEventContext *trackContext;

- (void)showFinishAnimationWithCompletion:(id /* block */)a0;
- (void)refreshWithText:(id)a0;
- (void)appear:(id /* block */)a0;
- (void)disappear:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupViews;

@end
