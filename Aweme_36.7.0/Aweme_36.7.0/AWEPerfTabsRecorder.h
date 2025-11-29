@class NSString, NSDictionary;

@interface AWEPerfTabsRecorder : NSObject <AWEPerfSceneMonitorProtocol>

@property (nonatomic) unsigned long long existFeedTab;
@property (nonatomic) unsigned long long existMainTab;
@property (nonatomic) unsigned long long independentScene;
@property (retain, nonatomic) NSString *existFeedTabDescription;
@property (retain, nonatomic) NSString *existMainTabDescription;
@property (retain, nonatomic) NSString *independentSceneDescription;
@property (retain, nonatomic) NSDictionary *feedTabsNameMap;
@property (retain, nonatomic) NSDictionary *independentSceneNameMap;
@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL currentIsFeed;
@property (retain, nonatomic) NSString *currentFeedScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)didUpdateScene:(id)a0;
- (void)feedTabbarDidSwitchToTab:(unsigned long long)a0 tabName:(id)a1;
- (void)bottomTabbarDidSwitch:(BOOL)a0;
- (void)mainTabbarDidSwitchToTab:(unsigned long long)a0;
- (unsigned long long)currentExistFeedTabs;
- (unsigned long long)currentExistMainTabs;
- (unsigned long long)currentIndependentScene;
- (id)currentExistFeedTabsDescription;
- (id)currentExistMainTabsDescription;
- (void).cxx_destruct;

@end
