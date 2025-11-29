@class MMRuleSetList, NSString, MMTheme, MMColor, NSCache;

@interface MMThemeManager : MMRootService <WCLazyInitObjectProtocol, MMServiceProtocol> {
    int m_ipadCssStyleType;
}

@property (retain, nonatomic) MMTheme *currentTheme;
@property (retain, nonatomic) NSCache *imageCache;
@property (retain, nonatomic) MMRuleSetList *ruleSetList;
@property (nonatomic) BOOL hasRegisterLazyInit;
@property (retain, nonatomic) MMColor *colorList;
@property (nonatomic) BOOL haveLazyInit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)CheckMark;
+ (id)CheckMarkDisabled;
+ (int)getIpadStyleType;
+ (BOOL)useiPadCss;
+ (BOOL)useiPhone6CssForIpadCompact;

- (void)setImageCacheObject:(id)a0 forKey:(id)a1;
- (void)clearImageCache;
- (id)getImageCacheObjectForKey:(id)a0;
- (double)timeToLazyInitAfterOpenFirstView;
- (void)goToLazyInitObject;
- (void)loadSimpleRuleSets;
- (void)loadRuleSets;
- (BOOL)loadCSSFromPath:(id)a0 IntoRuleSetList:(id)a1;
- (void)loadColors;
- (void)reloadThemeResource;
- (BOOL)loadUserPreferedTheme;
- (id)pathOfResNamed:(id)a0;
- (id)getImageName:(id)a0;
- (id)imageNamed:(id)a0;
- (id)imageNamed:(id)a0 warnIfNotFound:(BOOL)a1;
- (id)svgImageNamed:(id)a0 color:(id)a1 ignoreNotFound:(BOOL)a2;
- (id)svgImageNamed:(id)a0 color:(id)a1;
- (id)svgImageNamed:(id)a0 size:(struct CGSize { double x0; double x1; })a1 color:(id)a2;
- (id)svgImageNamed:(id)a0 size:(struct CGSize { double x0; double x1; })a1 color:(id)a2 angle:(int)a3;
- (id)svgImageDisableNamed:(id)a0 size:(struct CGSize { double x0; double x1; })a1 color:(id)a2;
- (id)svgImageHighlightNamed:(id)a0 size:(struct CGSize { double x0; double x1; })a1 color:(id)a2;
- (id)svgImageNamed:(id)a0 size:(struct CGSize { double x0; double x1; })a1 color:(id)a2 alpha:(double)a3;
- (id)svgImageNamed:(id)a0 size:(struct CGSize { double x0; double x1; })a1 color:(id)a2 alpha:(double)a3 angle:(int)a4;
- (id)svgImageNamed:(id)a0 size:(struct CGSize { double x0; double x1; })a1 color:(id)a2 alpha:(double)a3 angle:(int)a4 ignoreNotFound:(BOOL)a5;
- (id)createSvgImageNamed:(id)a0 size:(struct CGSize { double x0; double x1; })a1 color:(id)a2 alpha:(double)a3 angle:(int)a4;
- (id)cacheKeyOfSvgImageNamed:(id)a0 size:(struct CGSize { double x0; double x1; })a1 color:(id)a2 alpha:(double)a3 angle:(int)a4;
- (id)imageHighlightNamed:(id)a0;
- (id)imageDisableNamed:(id)a0;
- (id)imageNamed:(id)a0 alpha:(double)a1;
- (id)imageNamed:(id)a0 Alpha:(float)a1 Suffix:(id)a2;
- (id)imageFromColor:(id)a0;
- (id)getRuleSetForSeletor:(id)a0;
- (id)getValueOfProperty:(id)a0 inRuleSet:(id)a1;
- (id)getValueOfProperty:(id)a0 inRuleSet:(id)a1 isAdapt:(BOOL)a2;
- (id)imageFromSelfCreateImagePath:(id)a0;
- (void)saveImage:(id)a0 ToSelfCreateImagePath:(id)a1;
- (void)clearSelfCreateImage;
- (void)onFirstRun;
- (void)onServiceMemoryWarning;
- (void)onServiceClearMemoryCache:(unsigned long long)a0 addedUserType:(unsigned long long)a1;
- (void)onServiceClearMemoryCacheInBackground;
- (BOOL)returnAsRawService;
- (void)reloadCssForMultiTaskingIfNeed;
- (void).cxx_destruct;

@end
