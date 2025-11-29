@protocol IESGCPFontScaleConfigService;

@interface IESGCPFontScaleUtil : NSObject

@property (retain, nonatomic) id<IESGCPFontScaleConfigService> fontConfig;

+ (double)calculateWithFontSize:(double)a0;
+ (double)currentFontScale;
+ (id)config;

- (BOOL)bigFontModeOn;
- (double)_currentFontScale;
- (void).cxx_destruct;

@end
