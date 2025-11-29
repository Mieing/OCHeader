@class UIColor, UIFont, UIView;

@interface AWEIMSkylightCellLayoutGuide : UIView <AWEIMSkylightCellLayoutGuideProtocol>

@property (class, readonly, nonatomic) double leadSpacing;
@property (class, readonly, nonatomic) double avatarWidth;
@property (class, readonly, nonatomic) double avatarContainerWidth;
@property (class, readonly, nonatomic) double virtualAvatarWidth;
@property (class, readonly, nonatomic) double cellWidth;
@property (class, readonly, nonatomic) double dotViewWidth;
@property (class, readonly, nonatomic) double nameLabelTop;
@property (class, readonly, nonatomic) double nameLabelHeight;
@property (class, readonly, nonatomic) UIColor *nameLabelColor;
@property (class, readonly, nonatomic) UIFont *nameLabelFont;

@property (retain, nonatomic) UIView *avatar;
@property (retain, nonatomic) UIView *avatarContainer;
@property (retain, nonatomic) UIView *commonDotBottom;
@property (retain, nonatomic) UIView *commonDotRightBottom;
@property (retain, nonatomic) UIView *nameLabel;
@property (retain, nonatomic) UIView *leftBottomAvatar;
@property (retain, nonatomic) UIView *leftBottomAvatarContainer;
@property (retain, nonatomic) UIView *commonDotCardRightTop;
@property (nonatomic) double leftBottomAvatarWidth;
@property (nonatomic) double leftBottomAvatarContainerWidth;
@property (nonatomic) double cardRightTopDotViewWidth;

+ (Class)enabledClass;
+ (double)avatarContainerMargin;
+ (double)itemSpacing;
+ (double)contentMargin;
+ (double)topPadding;
+ (double)headerViewHeight;
+ (double)cellHeight;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithContainer:(id)a0;
- (void)setupUI;
- (void)setupLayout;

@end
