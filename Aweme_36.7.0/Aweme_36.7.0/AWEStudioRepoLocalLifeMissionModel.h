@class NSString, NSDictionary;

@interface AWEStudioRepoLocalLifeMissionModel : NSObject <ACCRepositoryRequestParamsDeprecated, AWERepositoryDraftProtocol, ACCRepositoryTrackContextDeprecated>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *lifeTaskId;
@property (nonatomic) long long lifeTaskType;
@property (copy, nonatomic) NSString *lifeTaskOrderId;
@property (copy, nonatomic) NSString *lifeTaskExtra;
@property (copy, nonatomic) NSString *lifeTaskName;
@property (copy, nonatomic) NSDictionary *lifeTrackDict;
@property (copy, nonatomic) NSDictionary *taskOriginInfo;
@property (nonatomic) BOOL hasManualChangeTask;

- (id)acc_publishRequestParams:(id)a0;
- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (id)acc_publishTrackEventParams:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
