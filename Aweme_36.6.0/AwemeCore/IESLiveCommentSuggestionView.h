@class IESLiveCommentQuickReplyView, HTSEventContext, IESLivePSComponentConfigModel;

@interface IESLiveCommentSuggestionView : UIView <IESLivePSComponentViewProtocol>

@property (retain, nonatomic) IESLiveCommentQuickReplyView *quickReplyView;
@property (copy, nonatomic) id /* block */ allAnimationFinished;
@property (retain, nonatomic) IESLivePSComponentConfigModel *configModel;
@property (retain, nonatomic) HTSEventContext *trackContext;

- (void)setupWithContents:(id)a0 contentColor:(id)a1;
- (void)refreshLayoutWithLeftMargin:(double)a0;
- (void)startFoldAnimationWithDuration:(double)a0;
- (void)appear:(id /* block */)a0;
- (void)disappear:(id /* block */)a0;
- (void)quickReplyClickWithContentView:(id)a0;
- (void).cxx_destruct;

@end
