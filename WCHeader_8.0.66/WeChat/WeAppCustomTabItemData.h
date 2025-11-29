@class UIImage, NSString, UIColor;

@interface WeAppCustomTabItemData : NSObject

@property (retain, nonatomic) UIImage *iconImg;
@property (retain, nonatomic) UIImage *selectedIconImg;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *linkUrl;
@property (nonatomic) BOOL isSmallRedDot;
@property (retain, nonatomic) NSString *badgeValue;
@property (retain, nonatomic) UIColor *badgeValueColor;

- (void)readConfigFromDic:(id)a0;
- (void)addDarkConfigFromDic:(id)a0;
- (void).cxx_destruct;

@end
