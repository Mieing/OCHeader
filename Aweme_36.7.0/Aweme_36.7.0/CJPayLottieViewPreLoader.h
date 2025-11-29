@class CJPayLottieView, NSDictionary;

@interface CJPayLottieViewPreLoader : NSObject

@property (retain, nonatomic) CJPayLottieView *dialogLottieView;
@property (retain, nonatomic) CJPayLottieView *halfLightLottieView;
@property (retain, nonatomic) CJPayLottieView *halfDarkLottieView;
@property (copy, nonatomic) NSDictionary *dialogLottieDict;
@property (copy, nonatomic) NSDictionary *halfLightLottieDict;
@property (copy, nonatomic) NSDictionary *halfDarkLottieDict;

+ (void)registerPlugin;
+ (id)sharedInstance;

- (void)loadLottieView;
- (void)p_preLoadLottieData;
- (id)p_dialogLottieUrl;
- (id)p_getJSONDataWithUrlStr:(id)a0;
- (id)p_halfLightLottieUrl;
- (id)p_halfDarkLottieUrl;
- (id)p_createImageViewWithName:(id)a0;
- (void).cxx_destruct;

@end
