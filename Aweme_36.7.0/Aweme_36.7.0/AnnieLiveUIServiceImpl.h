@class NSString, NSObject;
@protocol AnnieXUIServiceProtocol;

@interface AnnieLiveUIServiceImpl : NSObject <BDXServiceProtocol>

@property (retain, nonatomic) NSObject<AnnieXUIServiceProtocol> *defaultService;
@property (retain, nonatomic) NSObject<AnnieXUIServiceProtocol> *defaultHostService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createService;
+ (BOOL)useAnnieXNavigationBarWithURL:(id)a0 context:(id)a1;
+ (BOOL)shouldUserStandardLongPressMenu:(id)a0;
+ (id)monitorCommonParamsWithContainer:(id)a0 context:(id)a1;
+ (id)appThemeKey;
+ (id)currentAppTheme;
+ (id)appThemeNotificationName;
+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (Class)defaultServiceClass;
+ (Class)defaultHostServiceClass;
+ (unsigned long long)serviceType;
+ (BOOL)respondsToSelector:(SEL)a0;
+ (id)forwardingTargetForSelector:(SEL)a0;
+ (BOOL)conformsToProtocol:(id)a0;
+ (void)exec;

- (id)navigationLeftViewItemsWithContext:(id)a0 containerVC:(id)a1;
- (void)onCreateNavigationContentView:(id)a0 navBarView:(id)a1 context:(id)a2 containerVC:(id)a3;
- (id)navigationRightViewItemsWithContext:(id)a0 containerVC:(id)a1;
- (void)onNavigationUpdateContentView:(id)a0 title:(id)a1 titleColor:(id)a2 context:(id)a3 containerVC:(id)a4;
- (id)onNavigationUpdateLeftItemsWithNavigationBarItems:(id)a0 context:(id)a1 containerVC:(id)a2;
- (id)onNavigationUpdateRightItemsWithNavigationBarItems:(id)a0 context:(id)a1 containerVC:(id)a2;
- (void)pageViewController:(id)a0 layoutPadContainer:(id)a1;
- (id)popupViewController:(id)a0 customPadLayoutWithModel:(id)a1;
- (id)popupViewController:(id)a0 customPadRadiusWithModel:(id)a1;
- (id)webMenusWithRootMenu:(id)a0 webView:(id)a1 schemaParams:(id)a2;
- (void)onLongPressImageInWebView:(id)a0 schemaParams:(id)a1 imageURL:(id)a2;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;

@end
