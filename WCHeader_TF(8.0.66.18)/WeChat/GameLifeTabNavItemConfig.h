@class UIColor, NSString, UIImage, JumpInfo;

@interface GameLifeTabNavItemConfig : NSObject

@property (copy, nonatomic) NSString *navKey;
@property (retain, nonatomic) UIImage *rightBarItemImg;
@property (retain, nonatomic) UIImage *rightBarItemDarkImg;
@property (copy, nonatomic) NSString *rightBarItemTitle;
@property (retain, nonatomic) UIColor *rightBarItemColor;
@property (retain, nonatomic) JumpInfo *jumpInfo;
@property (nonatomic) long long badgetValue;
@property (nonatomic) BOOL hasSmallRedDot;

+ (id)navItemConfigFromCornerSetting:(id)a0;
+ (id)navItemConfigArrayFromCornerSettings:(id)a0;

- (void).cxx_destruct;

@end
