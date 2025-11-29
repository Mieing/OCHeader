@class NSDictionary, NSString;

@interface AWESearchWidgetSupporter : NSObject <AWEUGSceneDesktopChannelGuideEvadeProtocol>

@property (retain, nonatomic) NSDictionary *widgetInfo;
@property (retain, nonatomic) NSDictionary *widgetHotSpotConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)shouldDesktopChannelGuideEvadeWithScene:(id)a0 enterFrom:(id)a1;
- (void)registerSearchWidgetIfNeeded;
- (void)preloadSearchWidgetGuideIfNeeded:(id /* block */)a0;
- (BOOL)searchWidgetGuideABEnabled;
- (void)showSearchWidgetGuideIfNeeded;
- (void)canShowSearchWidgetGuide:(id /* block */)a0;
- (void)reloadSearchWidgetDataIfNeeded;
- (BOOL)searchWidgetBasicStyleABEnabled;
- (long long)searchWidgetHotSpotShowCnt;
- (long long)searchWidgetHotSpotShowPos;
- (BOOL)searchWidgetWordsToGuess;
- (id)searchUserDefaultsKey;
- (id)getSearchUserDefault;
- (void)reloadSearchWidgetWithUserDefaults:(id)a0;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
- (void)applicationDidEnterBackground;
- (id)init;
- (id)sceneType;

@end
