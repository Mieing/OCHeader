@class NSString;

@interface AWELuckyCatCommonTaskEntityData : NSObject

@property (copy, nonatomic) NSString *taskKey;
@property (copy, nonatomic) NSString *taskId;
@property (copy, nonatomic) NSString *taskName;
@property (copy, nonatomic) NSString *taskBusinessType;
@property (nonatomic) BOOL needRewardRequest;
@property (nonatomic) BOOL closeAutoRemove;

- (id)initWithTaskKey:(id)a0 needRewardRequest:(BOOL)a1;
- (void).cxx_destruct;

@end
