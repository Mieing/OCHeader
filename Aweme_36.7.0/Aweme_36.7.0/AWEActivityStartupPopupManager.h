@class NSArray, NSDictionary, AWEAwemeModel, NSString;

@interface AWEActivityStartupPopupManager : NSObject <AWEActivityStartupPopupManagerProtocol>

@property BOOL isShowing;
@property BOOL isShowLynxContainView;
@property (nonatomic) long long lastScene;
@property BOOL didColdStartTriggered;
@property (nonatomic) double lastQueryTime;
@property (copy, nonatomic) NSArray *popupInfos;
@property (retain, nonatomic) AWEAwemeModel *currentAwemeModel;
@property (copy, nonatomic) NSArray *goldPopupPages;
@property (retain, nonatomic) NSDictionary *classSceneMap;
@property (nonatomic) BOOL needReShowPopup;
@property (copy, nonatomic) NSString *currScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)tabBarDidChangeNotification:(id)a0;
- (void)sceneDidAppeared:(id)a0;
- (void)trackLogWithKey:(id)a0 message:(id)a1;
- (void)showPopupView;
- (void)feedPlayStatusDidChangeForItem:(id)a0;
- (void)startPopupIfNeededWithScene:(long long)a0 context:(id)a1;
- (void)startPopupIfNeededAfterNotificationForAuto;
- (void)startPopupIfNeededAfterNotificationForManual;
- (void)StartupPopBDXContainerNotification:(id)a0;
- (BOOL)checkIfShouldRequest:(long long)a0;
- (void)showPopupViewWithCheckAction;
- (BOOL)preCheckIfCanShow;
- (void)showPopupViewWithConfig:(id)a0;
- (void)getStartupPopupConfig:(long long)a0 context:(id)a1 completion:(id /* block */)a2;
- (id)getCurrScene;
- (void)combineAndResortPopupInfos:(id)a0;
- (id)getFirstPopupInfo;
- (BOOL)checkIfCanShowForGoldPopup:(id)a0;
- (void)deletePopupInfo:(id)a0;
- (long long)getSameDayWith:(double)a0;
- (void)savePopupsInfos:(id)a0;
- (BOOL)isNextGoldPopup;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
