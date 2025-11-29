@class NSString, AWEAwemeModel;

@interface AWEPlayletWidgetControl : NSObject <AWEUGSceneDesktopChannelGuideEvadeProtocol, AWEShowPlayletWidgetManagerProtocol>

@property (retain, nonatomic) AWEAwemeModel *cachedAwemeModel;
@property (copy, nonatomic) NSString *playletEnterFrom;
@property (nonatomic) BOOL isPlayletStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showPlayletWidgetGuideWithEnterFrom:(id)a0 isPlayletStream:(BOOL)a1;
+ (id)sharedInstance;

- (id)enterFrom;
- (BOOL)shouldDesktopChannelGuideEvadeWithScene:(id)a0 enterFrom:(id)a1;
- (id)initWithEnterFrom:(id)a0 isPlayletStream:(BOOL)a1;
- (void)showWidgetViewPassAllFrequencyControl:(BOOL)a0 needFrequencyControl:(BOOL)a1;
- (void)showWidgetViewPassAllFrequencyControl:(BOOL)a0;
- (void)refreshWidget;
- (void)trackWidgetLandingWithParams:(id)a0;
- (id)getPlayletWidgetCacheAwemeModelWithAwemeId:(id)a0;
- (id)getPlayletWidgetCacheAwemeModel;
- (BOOL)hasPlayletWidgetCache:(id)a0;
- (void)initPlayletWidgetSettings;
- (void)checkWidgetInstalledWithCompletion:(id /* block */)a0;
- (BOOL)enableUseWidgetCache;
- (void)updatePlayletWidgetSettings;
- (id)widgetCacheAwemeStringTransferToAwemeModel:(id)a0;
- (void)updateInstanceCachedAwemeModel:(id)a0;
- (void).cxx_destruct;
- (id)position;
- (id)sceneType;
- (id)tabID;

@end
