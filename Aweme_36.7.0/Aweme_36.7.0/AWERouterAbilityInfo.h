@class NSString, NSDictionary, NSError, ACCRecordViewControllerInputData;

@interface AWERouterAbilityInfo : NSObject <AWERouterAbilityInfo>

@property (nonatomic) long long ability_status;
@property (nonatomic) long long support_type;
@property (copy, nonatomic) id objectId;
@property (retain, nonatomic) id object;
@property (retain, nonatomic) NSDictionary *routerParams;
@property (retain, nonatomic) ACCRecordViewControllerInputData *inputData;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) unsigned long long abilityMaskOption;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)parametersPromiseCheck;
- (void)abilityAssemblyWithCompletion:(id /* block */)a0;
- (id)abilityTrackData;
- (void)cancelOperationTask;
- (void)jumpShootInputDataProcessing;
- (void).cxx_destruct;

@end
