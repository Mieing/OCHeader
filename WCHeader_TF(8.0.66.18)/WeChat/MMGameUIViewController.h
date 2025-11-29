@class NSMutableArray;

@interface MMGameUIViewController : GameCenterNativeVc

@property (retain, nonatomic) NSMutableArray *visibleStateArray;
@property (nonatomic) BOOL bTopWhiteStyle;
@property (nonatomic) BOOL noNeedReport;
@property (nonatomic) unsigned int sourceScene;
@property (nonatomic) unsigned int currentScene;

- (id)initWithSourceScene:(unsigned int)a0 CurrentScene:(unsigned int)a1;
- (void)dealloc;
- (void)initNotificationObservers;
- (void)removeNotificationObservers;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)applicationWillResignActive;
- (BOOL)addVisibleState:(BOOL)a0 Reason:(id)a1;
- (BOOL)pageTimeReport;
- (id)getStatStr:(unsigned long long)a0 ForegroundTime:(unsigned long long)a1;
- (unsigned long long)calcForegroundTimeDuration;
- (void)OnReturn;
- (void)viewDidLoad;
- (long long)overrideUserInterfaceStyle;
- (void).cxx_destruct;

@end
