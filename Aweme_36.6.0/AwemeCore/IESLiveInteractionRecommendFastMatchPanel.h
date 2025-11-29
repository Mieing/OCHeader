@class IESLiveInteractionRecommendFastMatchPanelModel, UILabel, UIImageView, NSMutableArray, IESLiveAnimatedImageView, UIView, UIButton;

@interface IESLiveInteractionRecommendFastMatchPanel : UIView

@property (retain, nonatomic) IESLiveInteractionRecommendFastMatchPanelModel *model;
@property (retain, nonatomic) UIButton *topRightButton;
@property (retain, nonatomic) UIImageView *anchorAvatar;
@property (retain, nonatomic) UIImageView *anchorAvatarBorder;
@property (retain, nonatomic) IESLiveAnimatedImageView *anchorAvatarAnimation;
@property (retain, nonatomic) UIView *roomInfoContainer;
@property (retain, nonatomic) UILabel *roomTitle;
@property (retain, nonatomic) UILabel *roomTag;
@property (retain, nonatomic) UIView *guestInfoContainer;
@property (retain, nonatomic) UIView *guestAvatarList;
@property (retain, nonatomic) NSMutableArray *guestAvatars;
@property (retain, nonatomic) UILabel *guestDescription;
@property (retain, nonatomic) UIButton *bottomLeftButton;
@property (retain, nonatomic) UIButton *bottomRightButton;
@property (copy, nonatomic) id /* block */ onClickMatchAnchorAvatar;
@property (copy, nonatomic) id /* block */ onClickTopRightButton;
@property (copy, nonatomic) id /* block */ onClickBottomLeftButton;
@property (copy, nonatomic) id /* block */ onClickBottomRightButton;

- (void)onClickTopRightButton:(id)a0;
- (void)onClickBottomLeftButton:(id)a0;
- (void)onClickBottomRightButton:(id)a0;
- (void)refreshGuestAvatarList;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)refreshUI;
- (void)dealloc;
- (void)initUI;
- (void)layoutUI;

@end
