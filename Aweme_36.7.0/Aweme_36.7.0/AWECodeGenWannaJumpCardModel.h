@class NSString;

@interface AWECodeGenWannaJumpCardModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *jumpSchema;
@property (copy, nonatomic) NSString *lightCoverUrl;
@property (copy, nonatomic) NSString *darkCoverUrl;
@property (copy, nonatomic) NSString *projectId;
@property (copy, nonatomic) NSString *parentId;
@property (copy, nonatomic) NSString *taskId;
@property (nonatomic) long long index;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (copy, nonatomic) NSString *modelID;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
