@class PassiveUnlockBtnConfigV2;

@interface AdChargePassiveUnlockConfigV2 : GPBMessage

@property (retain, nonatomic) PassiveUnlockBtnConfigV2 *trialBtnConfig;
@property (nonatomic) BOOL hasTrialBtnConfig;
@property (retain, nonatomic) PassiveUnlockBtnConfigV2 *broadcastBtnConfig;
@property (nonatomic) BOOL hasBroadcastBtnConfig;

+ (id)descriptor;

@end
