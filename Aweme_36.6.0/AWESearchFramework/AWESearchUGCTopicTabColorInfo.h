@class NSDictionary;

@interface AWESearchUGCTopicTabColorInfo : NSObject

@property (copy, nonatomic) NSDictionary *colorConfig;
@property (copy, nonatomic) NSDictionary *lightColorConfig;
@property (copy, nonatomic) NSDictionary *darkColorConfig;
@property (nonatomic) BOOL searchVCUsePureColor;

- (id)getCurrentBackgroundColor;
- (id)initWithColorConfig:(id)a0;
- (long long)currSystemIsLightTheme;
- (id)colorForStickingLightNotPureMode;
- (id)colorForStickingLightPureMode;
- (id)colorForStickingDarkNotPureMode;
- (id)colorForStickingDarkPureMode;
- (BOOL)needHideCornerForStickingLightMode;
- (BOOL)needHideCornerForStickingDarkMode;
- (BOOL)getStickyHideCorner;
- (void).cxx_destruct;

@end
