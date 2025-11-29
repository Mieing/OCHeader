@class BDPBusinessRevisitGuideRequestContext, BDPRevisitGuideRevisitData, NSArray, BDPUniqueID, NSMutableDictionary, BDPRevisitGuidanceConditionModel, NSDictionary, BDPRevisitCustomData;
@protocol BDPBusinessRevisitGuideDelegte;

@interface BDPBusinessRevisitGuideContext : NSObject

@property (retain, nonatomic) BDPBusinessRevisitGuideRequestContext *requestContext;
@property (retain, nonatomic) NSMutableDictionary *customizedAwardInfos;
@property (retain, nonatomic) NSMutableDictionary *taskIDPathMap;
@property (nonatomic) long long remainCount;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) BOOL isHasLeftSidebar;
@property (nonatomic) double validTime;
@property (nonatomic) double enterTime;
@property (retain, nonatomic) BDPRevisitGuideRevisitData *revisitData;
@property (copy, nonatomic) NSArray *guidanceArr;
@property (retain, nonatomic) BDPRevisitGuidanceConditionModel *matchedGuidance;
@property (weak, nonatomic) id<BDPBusinessRevisitGuideDelegte> delegate;
@property (copy, nonatomic) NSDictionary *bizExtraDict;
@property (retain, nonatomic) BDPRevisitCustomData *usedCustomData;
@property (nonatomic) long long displayCount;

- (void)recordAppUseDuration;
- (BOOL)checkGuidanceIsMatchDisplayRule:(id)a0;
- (BOOL)isMatchPathExitConditionV2:(id)a0;
- (void)p_recordTimeOfNativeAppLaunch;
- (void)updateGuidanceDataWithResponse:(id)a0;
- (void)p_requestRevisitDataWithCompletion:(id /* block */)a0;
- (void)recordTimeOfNativeAppLaunch;
- (void)updateGuidanceData;
- (void)p_setRevisitConditionTimerWithInterval:(double)a0;
- (void)p_setRealConditionTimerWithInterval:(double)a0;
- (void)updateRevisitData;
- (void)updateRealTimeConditionDataWithResponse:(id)a0;
- (void)p_requestRealConditionWithCompletion:(id /* block */)a0;
- (id)p_getTimeOfNativeAppLaunch;
- (BOOL)p_getNeedShowComponentWithTimestamp:(double)a0;
- (BOOL)checkConditionsResultV2;
- (void)markUpdateInfoWithImageUrl:(id)a0 title:(id)a1 subTitle:(id)a2 forPath:(id)a3 taskID:(id)a4;
- (void)markUpdateInfoValidForTaskID:(id)a0;
- (id)validCustomDataForPath:(id)a0;
- (void)uploadLocalRevisitDataWithEventParams:(id)a0 uniqueID:(id)a1;
- (void)p_updateShowComponetStorageWithTimestamp:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (void)disable;
- (void)reset;

@end
