@class UIImage;

@interface AWETabBarSkinViewParams : NSObject <NSCopying>

@property (retain, nonatomic) UIImage *bottomImage;
@property (retain, nonatomic) UIImage *leftImage;
@property (retain, nonatomic) UIImage *rightImage;
@property (nonatomic) double leftImageLeftPadding;
@property (nonatomic) double rightImageRightPadding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
