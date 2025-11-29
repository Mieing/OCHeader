@class UIImage;

@interface AWEHPChannelTabBarItemModel : NSObject <NSCopying>

@property (nonatomic) BOOL animated;
@property (copy, nonatomic) UIImage *rightIndicatorImage;

- (void).cxx_destruct;
- (BOOL)isValid;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
