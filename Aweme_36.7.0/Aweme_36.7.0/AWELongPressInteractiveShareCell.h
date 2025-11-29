@class UIStackView, UIView, AWELongPressDoubleAvatarView, UILongPressGestureRecognizer, UIImageView, BDImageView, UIButton, YYLabel, AWELongPressPanelBaseViewModel, UILabel;
@protocol AWELongPressInteractiveShareCellDelegate;

@interface AWELongPressInteractiveShareCell : UICollectionViewCell

@property (retain, nonatomic) UIView *iconBackView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) AWELongPressDoubleAvatarView *doubleAvatarView;
@property (retain, nonatomic) BDImageView *webPImageV;
@property (retain, nonatomic) UIImageView *iconImageV;
@property (retain, nonatomic) UIView *airplaneBackView;
@property (retain, nonatomic) UIImageView *airplaneImageV;
@property (retain, nonatomic) UIView *userActiveBackView;
@property (retain, nonatomic) UIView *userActiveView;
@property (retain, nonatomic) UILabel *titleLable;
@property (retain, nonatomic) YYLabel *subtitleLabel;
@property (retain, nonatomic) UIStackView *subtitleStackView;
@property (retain, nonatomic) UIButton *shareTextButton;
@property (retain, nonatomic) UIImageView *hasShareDotCheckMark;
@property (retain, nonatomic) UIImageView *hasShareDotCheckMarkBackView;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (weak, nonatomic) id<AWELongPressInteractiveShareCellDelegate> delegate;
@property (retain, nonatomic) AWELongPressPanelBaseViewModel *InteractiveViewModel;
@property (nonatomic) BOOL needSupportShareText;

- (BOOL)hitStreakUpdateExp;
- (void)p_addLongPressGesForAvatar;
- (id)p_titleLabelAdaptedFont;
- (void)p_longPressGesHandler:(id)a0;
- (double)airPlaneImageWH;
- (double)p_labelMaxWidth;
- (id)p_subtitleTextCacheKeyWithShareModel:(id)a0;
- (void)updateCommontUI;
- (void)shareDailyImageDynamic;
- (void)addWebPToView:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (id)gestureRecognizers;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateUI;
- (void)setUpUI;

@end
