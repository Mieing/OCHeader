@protocol IESLiveFontScaleConfig;

@interface IESFontAdditionConfig : NSObject

@property (retain, nonatomic) id<IESLiveFontScaleConfig> fontConfig;

+ (double)calculateWithFontSize:(double)a0;
+ (double)currentFontScale;
+ (id)config;

- (BOOL)bigFontModeOn;
- (double)_currentFontScale;
- (void).cxx_destruct;

@end
