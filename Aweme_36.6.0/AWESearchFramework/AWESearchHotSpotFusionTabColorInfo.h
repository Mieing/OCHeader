@class NSDictionary;

@interface AWESearchHotSpotFusionTabColorInfo : NSObject

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
- (void).cxx_destruct;

@end
