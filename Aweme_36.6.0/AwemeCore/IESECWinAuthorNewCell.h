@class UIImageView, UILabel, IESECWinAuthorGuideInfoView, IESECRelationFansClubBubbleView, IESECBubbleView, IESECWinAuthorManageInfoBottomView, UIView, CAGradientLayer, NSString, IESECUIImageView, IESECRelationMultipleFunctionsFollowView, IESECWinAuthorObject, IESECWinAuthorManageInfoTopView;

@interface IESECWinAuthorNewCell : UICollectionViewCell <IESECRelationFansClubBubbleViewDelegate, IESECWInAuthorCellProtocol>

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) IESECWinAuthorObject *object;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) CAGradientLayer *fixedLayer;
@property (retain, nonatomic) CAGradientLayer *animationLayer;
@property (retain, nonatomic) IESECUIImageView *livingIcon;
@property (retain, nonatomic) IESECRelationFansClubBubbleView *bubbleView;
@property (retain, nonatomic) UIImageView *goodAuthorImage;
@property (retain, nonatomic) UILabel *fansCountLabel;
@property (retain, nonatomic) UIView *splitView;
@property (retain, nonatomic) UILabel *ratePrefixLabel;
@property (retain, nonatomic) UILabel *rateLabel;
@property (retain, nonatomic) IESECWinAuthorGuideInfoView *guideInfoView;
@property (retain, nonatomic) IESECWinAuthorManageInfoTopView *topManageInfoView;
@property (retain, nonatomic) IESECWinAuthorManageInfoBottomView *bottomManageInfoView;
@property (retain, nonatomic) UIImageView *followBubbleImageView;
@property (retain, nonatomic) IESECRelationMultipleFunctionsFollowView *followView;
@property (retain, nonatomic) IESECBubbleView *fansClubGuideBubbleView;
@property (copy, nonatomic) id /* block */ clickAvatarBlock;
@property (copy, nonatomic) id /* block */ clickGoodAuthorBlock;
@property (copy, nonatomic) id /* block */ clickAuthorNameIconBlock;
@property (copy, nonatomic) id /* block */ clickBubbleBlock;
@property (copy, nonatomic) id /* block */ clickNameLabelAreaBlock;
@property (copy, nonatomic) id /* block */ clickOtherAreaBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createLayer;
- (void)switchFollowViewMode:(unsigned long long)a0;
- (void)transferToProfile;
- (void)transferToLive;
- (void)updateDataWithObject:(id)a0;
- (void)transferToReputation;
- (void)clickGoodAuthor;
- (id)getFollowView;
- (id)getAvatarView;
- (id)getWindowTitle;
- (void)configSubviewAlpha:(double)a0;
- (void)showFollowBubbleWithCompletion:(id /* block */)a0;
- (void)showFansClubRedpackBubbleWithCompletion:(id /* block */)a0;
- (void)hideFansClubRedpackBubble;
- (void)showBubbleView;
- (void)showFansClubBubbleView;
- (void)clickAuthorNameIcon;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })cellSize;
- (void)setupUI;
- (void)tapAction;

@end
