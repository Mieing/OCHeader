@class UIImageView, CAShapeLayer;

@interface AWERelationFollowCleanAvatarContainer : UIView

@property (retain, nonatomic) UIImageView *firstAvatarImage;
@property (retain, nonatomic) UIImageView *secondAvatarImage;
@property (retain, nonatomic) UIImageView *singleAvatarImage;
@property (retain, nonatomic) CAShapeLayer *secondAvatarImageShapeLayer;
@property (retain, nonatomic) CAShapeLayer *secondAvatarImageBorderLayer;

+ (id)__defaultImage;

- (double)userIconWidth;
- (double)smallUserIconWidth;
- (void)updateImage:(id)a0 userModel:(id)a1 imageSize:(struct CGSize { double x0; double x1; })a2;
- (struct CGPoint { double x0; double x1; })overlapPoint;
- (double)overlapRadius;
- (void)updateAvatar:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (double)startAngle;
- (double)endAngle;
- (void)setupView;

@end
