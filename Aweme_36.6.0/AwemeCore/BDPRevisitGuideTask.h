@class BDPAppVideoAdvRevisitConfigModelNew, NSDictionary, NSString, BDPUniqueID;

@interface BDPRevisitGuideTask : NSObject <BDPContainerLifeCycleMessage, BDPAppRewardTaskProtocol>

@property (retain, nonatomic) BDPUniqueID *uniqueId;
@property (retain, nonatomic) NSDictionary *params;
@property (retain, nonatomic) BDPAppVideoAdvRevisitConfigModelNew *revisitConfigModel;
@property (copy, nonatomic) id /* block */ rewardTaskResultCallBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(id)a0 uniqueID:(id)a1;
- (id)_getGuideFrequencyKey;
- (id)initWithUniqueId:(id)a0 params:(id)a1;
- (void)runRewardTaskWithExecuteCallBack:(id /* block */)a0 resultCompletion:(id /* block */)a1;
- (void).cxx_destruct;

@end
