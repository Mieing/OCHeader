@class NSString, NSDictionary, NSArray;

@interface AWEEvaluationTaskModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long taskID;
@property (copy, nonatomic) NSString *taskStatus;
@property (copy, nonatomic) NSString *taskCreateDate;
@property (copy, nonatomic) NSString *taskUpdateDate;
@property (copy, nonatomic) NSString *taskName;
@property (copy, nonatomic) NSString *taskStartTime;
@property (copy, nonatomic) NSString *taskMeasurement;
@property (nonatomic) long long taskType;
@property (nonatomic) long long taskMode;
@property (copy, nonatomic) NSDictionary *taskModeDetail;
@property (nonatomic) long long taskDisplayMode;
@property (nonatomic) BOOL isSyncToMobile;
@property (nonatomic) long long taskImageHandleMode;
@property (copy, nonatomic) NSString *taskDescription;
@property (copy, nonatomic) NSString *taskDisplayScreen;
@property (copy, nonatomic) NSString *taskCreator;
@property (copy, nonatomic) NSDictionary *taskSettings;
@property (copy, nonatomic) NSDictionary *taskMetaParsed;
@property (copy, nonatomic) NSString *taskURL;
@property (copy, nonatomic) NSArray *taskData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
