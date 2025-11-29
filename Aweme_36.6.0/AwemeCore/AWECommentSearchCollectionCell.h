@class UIImageView, UILabel, UIView, CALayer;
@protocol AWEIMActiveUserInfoService;

@interface AWECommentSearchCollectionCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *verifyBadgeView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIImageView *selectedStateImageView;
@property (retain, nonatomic) UIView *onlineDotView;
@property (retain, nonatomic) id<AWEIMActiveUserInfoService> activeInfo;
@property (retain, nonatomic) CALayer *avatarMaskLayer;
@property (retain, nonatomic) CALayer *nameFakeLayer;

+ (Class)aAWEBrandColorAdapterClass;
+ (struct CGSize { double x0; double x1; })itemSize;
+ (id)identifier;

- (void)updateTheme:(BOOL)a0;
- (void)updateActiveUserStateWithUser:(id)a0;
- (id)aAWEBrandColorAdapter;
- (void)configWithUser:(id)a0;
- (void)showSelectedState:(BOOL)a0 withSelected:(BOOL)a1;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;

@end
