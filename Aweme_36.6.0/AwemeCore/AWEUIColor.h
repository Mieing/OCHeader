@class NSString;

@interface AWEUIColor : NSObject <AWEUIColorAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)colorNamed:(id)a0 inTheme:(id)a1;
+ (id)colorWithARGBString:(id)a0 defaultColor:(id)a1;
+ (id)constColorUnlessDarkModeWithName:(id)a0;
+ (id)colorWithName:(id)a0;
+ (void)registerBizColorWithDomain:(id)a0 colorName:(id)a1 colorProvider:(id /* block */)a2;
+ (id)bizColorNamed:(id)a0 domain:(id)a1;
+ (unsigned long long)currentSuit;
+ (id)constColorWithName:(id)a0;
+ (id)availableSuits;
+ (long long)userPreferDarkModeStyle;
+ (id)rawColorResource;
+ (id)colorInCommentNamed:(id)a0;
+ (BOOL)disableDarkMode;
+ (id)modernFeedColorNamed:(id)a0 inTheme:(unsigned long long)a1;
+ (id)aweVideoFeed_colorThemeWithModernFeedUITheme:(unsigned long long)a0;
+ (void)registerBizColorWithDomain:(id)a0 colorName:(id)a1 darkARGB:(id)a2 lightARGB:(id)a3;
+ (void)registerColorResourceWithBundlePath:(id)a0 resourceName:(id)a1;
+ (void)loadRegisterColorResource:(id)a0;
+ (void)setDisableDarkMode:(BOOL)a0;
+ (void)setUserPreferDarkModeStyle:(long long)a0;
+ (id)music_lightColorNamed:(id)a0;
+ (id)nearby_colorNamed:(id)a0 inTheme:(id)a1;
+ (id)nearby_colorNamed:(id)a0;
+ (id)__nearbyColorMapping;
+ (id)__nearbyColors;
+ (BOOL)nearby_isValidColorHexString:(id)a0;
+ (BOOL)nearby_isGradientColor:(id)a0;
+ (void)nearby_invalidateColorCache;
+ (id)nearby_gradientColorWithString:(id)a0;
+ (id)colorNamed:(id)a0 useSystemColor:(BOOL)a1;
+ (id)modernColorNamed:(id)a0;
+ (void)registerColorResourceWithRawResourceMap:(id)a0;
+ (BOOL)checkColorResourceIsRepeat:(id)a0;
+ (void)switchToSuit:(unsigned long long)a0;
+ (void)loadStandardColorMap;
+ (void)loadDeprecatedColorMap;
+ (void)invalidateColorCache;
+ (void)invalidateBizColorCache;
+ (id)getStandardColorMap;
+ (void)switchToSuitAndInvalidateColorCache:(unsigned long long)a0;
+ (id)rawColorForName:(id)a0 style:(long long)a1;
+ (id)dicColor;
+ (id)dicConstColor;
+ (void)initialize;
+ (id)colorNamed:(id)a0;
+ (BOOL)isDarkMode;


@end
