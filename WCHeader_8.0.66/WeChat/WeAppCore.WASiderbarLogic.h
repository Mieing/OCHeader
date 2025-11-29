@class NSString;

@interface WeAppCore.WASiderbarLogic : MMObject {
    void /* unknown type, empty encoding */ currentWebView;
    void /* unknown type, empty encoding */ enterScene;
    void /* unknown type, empty encoding */ enterTimeMs;
    void /* unknown type, empty encoding */ sessionId;
    void /* unknown type, empty encoding */ siderbarView;
    void /* unknown type, empty encoding */ arrCommonUsedItem;
    void /* unknown type, empty encoding */ arrRecentlyItem;
    void /* unknown type, empty encoding */ commuseConfig;
    void /* unknown type, empty encoding */ contact;
    void /* unknown type, empty encoding */ isLoading;
    void /* unknown type, empty encoding */ commuseTitleWording;
}

@property (nonatomic, copy) NSString *sessionId;

+ (BOOL)useNewSiderbar;
+ (BOOL)isExptB;
+ (BOOL)isExptC;
+ (BOOL)isExptD;
+ (BOOL)isExptE;
+ (BOOL)isExptF;
+ (BOOL)isExptG;
+ (BOOL)supportMoreButtonTrigger;
+ (BOOL)supportFourItemUI;
+ (BOOL)supportLibsHandleGesture;
+ (long long)swipeLeftFastVelocity;
+ (long long)swipeLeftTriggerThreshold;

- (id)initWithContact:(id)a0 webview:(id)a1 enterScene:(long long)a2;
- (void)setupDataBeforeShow;
- (void)onAppEnterBackground;
- (BOOL)hasRecentlyUsedSection;
- (void)onWeappEnterBackground:(long long)a0;
- (id)init;
- (void).cxx_destruct;

@end
