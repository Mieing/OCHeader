@class NSArray, NSString;

@interface IESIMCommercialAdapterPluginImpl : NSObject <IESIMCommercialAdapterPlugin>

@property (retain) NSArray *unsupportedFeatureSettingDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)shouldDisableCloseFriends;
- (BOOL)shouldDisableGroupVote;
- (BOOL)shouldDisableEnterprise;
- (BOOL)shouldDisableGroupCoupon;
- (BOOL)shouldDisableWorkBench;
- (BOOL)shouldDisableCustomerService;
- (BOOL)shouldDisableRedPacket;
- (BOOL)shouldDisableTransferAccount;
- (BOOL)shouldDisableShareCommidity;
- (BOOL)shouldDisableShareWindow;
- (BOOL)shouldDisableGame;
- (BOOL)shouldDisableMedical;
- (BOOL)shouldDisableCameraNew;
- (BOOL)shouldDisableFeaturesInSkylight;
- (BOOL)shouldDisableLocation;
- (BOOL)shouldDisableLive;
- (BOOL)shouldDisableSkylight;
- (BOOL)shouldDisableDouBao;
- (id)unsupportedFeatureEntries;
- (void).cxx_destruct;
- (id)appDisplayName;

@end
