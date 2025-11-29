@interface BDMannorAdReportService : NSObject

+ (void)trackAdShowWith:(id)a0 logExtra:(id)a1 extra:(id)a2 adExtraData:(id)a3 tag:(id)a4 refer:(id)a5;
+ (void)trackAdPlayWith:(id)a0 logExtra:(id)a1 extra:(id)a2 adExtraData:(id)a3 tag:(id)a4 refer:(id)a5;
+ (void)trackAdPlayFailedWith:(id)a0 logExtra:(id)a1 extra:(id)a2 adExtraData:(id)a3 tag:(id)a4 refer:(id)a5;
+ (void)trackAdContinueWith:(id)a0 logExtra:(id)a1 extra:(id)a2 adExtraData:(id)a3 tag:(id)a4 refer:(id)a5;
+ (void)trackAdPauseWith:(id)a0 logExtra:(id)a1 extra:(id)a2 adExtraData:(id)a3 tag:(id)a4 refer:(id)a5;
+ (void)trackAdBreakWith:(id)a0 logExtra:(id)a1 extra:(id)a2 adExtraData:(id)a3 tag:(id)a4 refer:(id)a5 watchedDuration:(long long)a6;
+ (void)trackAdOverWith:(id)a0 logExtra:(id)a1 extra:(id)a2 adExtraData:(id)a3 tag:(id)a4 refer:(id)a5 watchedDuration:(long long)a6;
+ (void)p_trackEventWith:(id)a0 creativeID:(id)a1 groupID:(id)a2 logExtra:(id)a3 extra:(id)a4 adExtraData:(id)a5 tag:(id)a6 refer:(id)a7;
+ (void)p_trackURLLListWith:(id)a0 logExtra:(id)a1 trackLabel:(id)a2 trackURLList:(id)a3 extra:(id)a4 adExtraData:(id)a5;
+ (void)trackAdClickWith:(id)a0 logExtra:(id)a1 extra:(id)a2 adExtraData:(id)a3 tag:(id)a4 refer:(id)a5;
+ (void)trackAdReplayWith:(id)a0 logExtra:(id)a1 extra:(id)a2 adExtraData:(id)a3 tag:(id)a4 refer:(id)a5;

@end
