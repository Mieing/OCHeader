@class NSString, AWEAIPropTaskModel;

@interface AWEStudioAIGCAsyncTaskPublicInfo : NSObject

@property (readonly, copy, nonatomic) NSString *taskID;
@property (readonly, copy, nonatomic) NSString *aigcType;
@property (readonly, nonatomic) AWEAIPropTaskModel *taskModel;
@property (readonly, nonatomic) unsigned long long taskStatus;
@property (readonly, nonatomic) long long queryType;
@property (readonly, nonatomic) long long taskType;

- (id)initWithTaskID:(id)a0 aigcType:(id)a1 taskStatus:(unsigned long long)a2 queryType:(long long)a3 taskType:(long long)a4 taskModel:(id)a5;
- (void).cxx_destruct;

@end
