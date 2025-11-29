@class NSString, AWESearchBackgroundPureColorModel, AWESearchBackgroundGradientModel, AWESearchBackgroundBGImageModel, AWESearchBackgroundLottieModel;

@interface AWESearchBackgroundModel : AWEBaseApiModel

@property (retain, nonatomic) AWESearchBackgroundPureColorModel *backgroundColorLight;
@property (retain, nonatomic) AWESearchBackgroundPureColorModel *backgroundColorDark;
@property (retain, nonatomic) AWESearchBackgroundGradientModel *gradientColorLight;
@property (retain, nonatomic) AWESearchBackgroundGradientModel *gradientColorDark;
@property (retain, nonatomic) AWESearchBackgroundBGImageModel *imageLight;
@property (retain, nonatomic) AWESearchBackgroundBGImageModel *imageDark;
@property (retain, nonatomic) AWESearchBackgroundBGImageModel *dynamicBackgroundLight;
@property (retain, nonatomic) AWESearchBackgroundBGImageModel *dynamicBackgroundDark;
@property (retain, nonatomic) AWESearchBackgroundLottieModel *lottieLight;
@property (retain, nonatomic) AWESearchBackgroundLottieModel *lottieDark;
@property (retain, nonatomic) AWESearchBackgroundGradientModel *maskGradientColorLight;
@property (retain, nonatomic) AWESearchBackgroundGradientModel *maskGradientColorDark;
@property (copy, nonatomic) NSString *showSearchBarGradientBorder;
@property (nonatomic) BOOL disableMaskGradient;

+ (id)imageLightJSONTransformer;
+ (id)imageDarkJSONTransformer;
+ (id)backgroundColorLightJSONTransformer;
+ (id)backgroundColorDarkJSONTransformer;
+ (id)gradientColorLightJSONTransformer;
+ (id)gradientColorDarkJSONTransformer;
+ (id)lottieLightJSONTransformer;
+ (id)lottieDarkJSONTransformer;
+ (id)maskGradientColorLightJSONTransformer;
+ (id)maskGradientColorDarkJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
