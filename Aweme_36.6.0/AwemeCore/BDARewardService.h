@interface BDARewardService : NSObject

+ (void)monitorService:(id)a0 value:(id)a1 category:(id)a2 extra:(id)a3;
+ (void)presentRewardController:(id)a0 byController:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
+ (id)taskPickInfoWithKey:(id)a0;
+ (void)preloadRewardDataWithRit:(long long)a0 creatorID:(id)a1 taskKey:(id)a2 adFrom:(id)a3 queryParams:(id)a4 needOneStageAmount:(BOOL)a5 enableTaskPick:(BOOL)a6 completion:(id /* block */)a7;
+ (id)genericCardViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 rit:(long long)a1 creatorID:(id)a2 adFrom:(id)a3 mpParams:(id)a4 queryExtra:(id)a5 lynxExtra:(id)a6 colorTheme:(id)a7;
+ (id)inSiteAdvertisingServiceInstance;
+ (void)preloadRewardDataWithRit:(long long)a0 creatorID:(id)a1 adFrom:(id)a2 ticket:(id)a3 taskKey:(id)a4 queryParams:(id)a5 needOneStageAmount:(BOOL)a6 enableTaskPick:(BOOL)a7 completion:(id /* block */)a8;
+ (void)preloadRewardDataWithRit:(long long)a0 creatorID:(id)a1 adFrom:(id)a2 ticket:(id)a3 taskKey:(id)a4 queryParams:(id)a5 needOneStageAmount:(BOOL)a6 completion:(id /* block */)a7;
+ (id)fetchLiveRoomInfoForRoomID:(id)a0;
+ (void)resetState;
+ (void)setup:(id)a0;

@end
