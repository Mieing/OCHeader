@class NSString, BDPThreadSafeDictionary, NSArray, NSDictionary, BDPUniqueID, NSTimer;

@interface BDPTrustIsolationUIService : NSObject <BDPTrustIsolationUIService, BDPBootLifeCycleMessage, BDPWarmBootMessage, BDPContainerLifeCycleMessage>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) long long trustIsolationType;
@property (nonatomic) BOOL hasHostSettings;
@property (copy, nonatomic) id /* block */ navigarionBarToastAnimation;
@property (nonatomic) BOOL hideLogo;
@property (nonatomic) unsigned long long floatingTheme;
@property (retain, nonatomic) BDPThreadSafeDictionary *strategosResponses;
@property (copy, nonatomic) NSString *industry;
@property (nonatomic) long long quotas;
@property (nonatomic) long long quotas_meet;
@property (nonatomic) unsigned long long trustLevel;
@property (retain, nonatomic) NSArray *UIConfiguration;
@property (retain, nonatomic) NSArray *orderUIConfiguration;
@property (retain, nonatomic) BDPThreadSafeDictionary *uniqueID2Shown;
@property (retain, nonatomic) NSArray *interceptTackId;
@property (copy, nonatomic) NSString *version;
@property (retain, nonatomic) NSArray *innerConfig;
@property (retain, nonatomic) NSDictionary *pageCodePriority;
@property (retain, nonatomic) NSString *logoTemplate;
@property (nonatomic) BOOL configReady;
@property (retain, nonatomic) BDPThreadSafeDictionary *delayPageSet;
@property (retain, nonatomic) NSTimer *timer;
@property (copy, nonatomic) BDPThreadSafeDictionary *customerServiceCompletions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (id)initService;
- (void)applicationExitWithUniqueID:(id)a0;
- (void)applicationWorkBeforeCloseWithUniqueID:(id)a0;
- (id)configurationWithTheme:(id)a0 config:(id)a1;
- (void)showTrustIsolationUIWithUniqueID:(id)a0 appPage:(id)a1 hideLogo:(BOOL)a2 navigationBarToastAnimation:(id /* block */)a3;
- (BOOL)canShowLogoAnimationWithUniqueID:(id)a0;
- (void)showWarningTipFloatingWithUniqueID:(id)a0 appPage:(id)a1;
- (void)showCustomerServiceWithUniqueID:(id)a0 appPage:(id)a1 completion:(id /* block */)a2;
- (void)updateInnerTrustConfigIfNeed:(id)a0;
- (void)getStrategosConfigWithUniqueID:(id)a0 completion:(id /* block */)a1;
- (void)initConfigurationWithUniqueID:(id)a0 force:(BOOL)a1;
- (id)getLocalCacheWithKey:(id)a0 type:(Class)a1 sandbox:(id)a2;
- (BOOL)needForceRequestConfigWithUniqueID:(id)a0;
- (id)generateConfigWithJSONArray:(id)a0;
- (void)delayPerformUI;
- (void)trackQueryStyle:(id)a0 version:(id)a1 type:(id)a2 result:(BOOL)a3 from:(id)a4 duration:(id)a5 msg:(id)a6;
- (void)updateLocalCacheWithObject:(id)a0 key:(id)a1 sandbox:(id)a2;
- (void)_requestTrustConfigWithUniqueID:(id)a0 completion:(id /* block */)a1;
- (void)initConfigurationWithUniqueID:(id)a0;
- (void)showCustomerServiceWithPage:(id)a0 completion:(id /* block */)a1;
- (id)getNewConfigWithTheme:(id)a0 appPage:(id)a1;
- (BOOL)isNewConfigVersionWithCode:(id)a0;
- (void)showWarningToastWithPage:(id)a0;
- (void)showWarningTipFloatingWithPage:(id)a0;
- (void)showLogoAnimationIfNeed:(id)a0;
- (BOOL)canShowWarningToast;
- (void)showLogoAnimationWithPage:(id)a0;
- (id)getUIConfigWithTheme:(id)a0;
- (void)showWarningTipFloatingInNewVersionWithPage:(id)a0 config:(id)a1 theme:(id)a2;
- (BOOL)canShowStrongWarningTipFloating;
- (void)showWarningTipFloatingInOldVersionWithPage:(id)a0;
- (BOOL)canShowWeakWarningTipFloating;
- (BOOL)canShowLogoAnimation;
- (BOOL)canShowUIWithTheme:(id)a0;
- (BOOL)canShowUIWithConfiguration:(id)a0;
- (id)subConfigWithTheme:(id)a0 appPage:(id)a1;
- (void)delayPerformUIWithTheme:(unsigned long long)a0 appPage:(id)a1;
- (void)notifyStrategosWithAppID:(id)a0;
- (void).cxx_destruct;

@end
