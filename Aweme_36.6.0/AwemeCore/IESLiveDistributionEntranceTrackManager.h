@interface IESLiveDistributionEntranceTrackManager : NSObject

+ (void)trackLiveShowWithRoom:(id)a0 coreParams:(id)a1 extraParams:(id)a2;
+ (id)trackingLiveTypeWithLiveRoom:(id)a0;
+ (void)trackLiveDuration:(id)a0 enterFromMerge:(id)a1 enterMethod:(id)a2 requestId:(id)a3 duration:(id)a4 extraParams:(id)a5;
+ (id)inviteModeForTrackByBattleSettings:(id)a0;
+ (void)trackDurationWithEnterFromMerge:(id)a0 enterMethod:(id)a1 duration:(id)a2 extraParams:(id)a3;
+ (id)paramsFromRoom:(id)a0 enterFromMerge:(id)a1 enterMethod:(id)a2 requestId:(id)a3 extraParams:(id)a4;
+ (BOOL)checkLiveEntranceWithEnterFromMerge:(id)a0 enterMethod:(id)a1 checkTitle:(BOOL)a2;
+ (id)viceViewTypeForTrack:(id)a0;
+ (long long)viceViewLayoutType:(id)a0;

@end
