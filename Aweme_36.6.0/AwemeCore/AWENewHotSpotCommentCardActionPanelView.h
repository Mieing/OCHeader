@class LOTAnimationView, AWENewHotSpotCommentActionPanelFrame, AWENewHotSpotFeedCardModel, AWENewHotSpotCommentCardActionButton;

@interface AWENewHotSpotCommentCardActionPanelView : UIView

@property (retain, nonatomic) LOTAnimationView *likeAnimationView;
@property (weak, nonatomic) AWENewHotSpotCommentActionPanelFrame *panelFrame;
@property (weak, nonatomic) AWENewHotSpotFeedCardModel *cardModel;
@property (retain, nonatomic) AWENewHotSpotCommentCardActionButton *likeButton;
@property (retain, nonatomic) AWENewHotSpotCommentCardActionButton *commentButton;
@property (retain, nonatomic) AWENewHotSpotCommentCardActionButton *shareButton;
@property (nonatomic) long long interactiveStyle;
@property (copy, nonatomic) id /* block */ likeBtnClickedBlock;
@property (copy, nonatomic) id /* block */ commentBtnClickedBlock;
@property (copy, nonatomic) id /* block */ shareBtnClickedBlock;

- (void)updateCommentCount;
- (void)updateDiggCount;
- (id)showStringFromNumber:(id)a0;
- (void)configWithFrame:(id)a0;
- (void)updateLayoutWithFrame:(id)a0;
- (void)setupSubviewContent;
- (void)updateShareCount;
- (void)_setupShareButtonDefaultImage;
- (void)_stopLikeAnimation;
- (void)_playLikeAnimation;
- (void)announceAccessibility:(id)a0;
- (void)_playDislikeAnimation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })likeAnimationFrame;
- (void)playLikeAnimation;
- (void)playDislikeAnimation;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
