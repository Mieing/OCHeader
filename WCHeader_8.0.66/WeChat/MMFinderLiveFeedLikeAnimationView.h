@class MMLiveLikeAnimationUtil, MMAudienceLiveLikePlayUtil, WCLiveBottomTextButton;

@interface MMFinderLiveFeedLikeAnimationView : MMFinderLiveFeedStreamWidgetBaseView

@property (retain, nonatomic) MMAudienceLiveLikePlayUtil *likePlayUtil;
@property (retain, nonatomic) MMLiveLikeAnimationUtil *likeAnimationUtil;
@property (retain, nonatomic) WCLiveBottomTextButton *likeUnClickableButton;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupLikePlayUtil;
- (void)updateLikeCount:(unsigned long long)a0 animated:(BOOL)a1;
- (void)updateLikeHeadImgContacts:(id)a0;
- (void)endLikePlay;
- (void)updateCheerInfo:(id)a0;
- (void)prepareForReuse;
- (void)updateLikeButtonIcon:(id)a0;
- (void).cxx_destruct;

@end
