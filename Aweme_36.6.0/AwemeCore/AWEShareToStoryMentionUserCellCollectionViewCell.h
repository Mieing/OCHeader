@class UIImageView, UIImage, UILabel, UIView, CALayer;
@protocol AWEIMActiveUserInfoService;

@interface AWEShareToStoryMentionUserCellCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) UIView *loadingLabelFakeView;
@property (retain, nonatomic) UIView *loadingImageFakeView;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (retain, nonatomic) UIImageView *selectedStateImageView;
@property (retain, nonatomic) UIView *onlineDotView;
@property (retain, nonatomic) CALayer *avatarMaskLayer;
@property (retain, nonatomic) id<AWEIMActiveUserInfoService> activeInfo;

+ (id)identifier;

- (void)updateActiveUserStateWithUser:(id)a0;
- (void)showSelectedState:(BOOL)a0 withSelected:(BOOL)a1;
- (void)configWithUser:(id)a0 isSelected:(BOOL)a1;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;

@end
