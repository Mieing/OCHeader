@interface AWEIMMultiAppConfig : NSObject

+ (BOOL)shouldDisableCloseFriends;
+ (BOOL)shouldDisableGroupVote;
+ (BOOL)shouldDisableEnterprise;
+ (BOOL)shouldDisableGroupCoupon;
+ (BOOL)shouldDisableWorkBench;
+ (BOOL)shouldDisableCustomerService;
+ (BOOL)shouldDisableRedPacket;
+ (BOOL)shouldDisableTransferAccount;
+ (BOOL)shouldDisableShareCommidity;
+ (BOOL)shouldDisableShareWindow;
+ (BOOL)shouldDisableGame;
+ (BOOL)shouldDisableMedical;
+ (BOOL)shouldDisableCameraNew;
+ (BOOL)shouldDisableFeaturesInSkylight;
+ (BOOL)shouldDisableLocation;
+ (BOOL)shouldDisableLive;
+ (id)unsupportedFeatureEntries;
+ (id)appDisplayName;

@end
