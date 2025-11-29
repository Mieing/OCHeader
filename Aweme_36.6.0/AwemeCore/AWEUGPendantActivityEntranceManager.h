@class UIView, NSString, AWEUGPendantActivityCollectionManager;

@interface AWEUGPendantActivityEntranceManager : NSObject <AWEUGPendantActivityEntranceManagerProtocol>

@property (nonatomic) long long currentSettingsVersion;
@property (retain, nonatomic) AWEUGPendantActivityCollectionManager *feedCollectionManager;
@property (retain, nonatomic) UIView *entranceBaseView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)feedCanPullRefresh:(id)a0;
- (void)setupObservation;
- (void)setupPendantBaseView:(id)a0 type:(unsigned long long)a1;
- (void)trackLogWithKey:(id)a0 message:(id)a1;
- (void)cleanActivityPendantData;
- (BOOL)isFCollectShowingPendantWithType:(unsigned long long)a0;
- (id)getCurrentActivityControllerWithType:(unsigned long long)a0;
- (void)syncPendantActivity:(id)a0;
- (BOOL)isShowingPendantWithType:(unsigned long long)a0;
- (void)registerPendantAdapter:(id)a0 type:(unsigned long long)a1 identify:(id)a2;
- (void)updateActivityData:(id)a0 identify:(id)a1;
- (void)updateActivityCollectionManager;
- (BOOL)isShowingPendantWithType:(unsigned long long)a0 level:(id)a1;
- (void)changePendantHiddenStatus:(BOOL)a0 withLevel:(id)a1;
- (void)changeFCollectPendantHiddenStatus:(BOOL)a0;
- (void).cxx_destruct;
- (void)updateActivity;
- (void)dealloc;

@end
