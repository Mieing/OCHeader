@class AWETabBarSkinViewParams;

@interface AWETabBarSkinContainerViewParams : NSObject <NSCopying>

@property (nonatomic) BOOL isTransparentImage;
@property (copy, nonatomic) AWETabBarSkinViewParams *darkSkinViewParams;
@property (copy, nonatomic) AWETabBarSkinViewParams *lightSkinViewParams;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
