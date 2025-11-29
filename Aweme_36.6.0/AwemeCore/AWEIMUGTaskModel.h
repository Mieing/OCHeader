@class NSString;

@interface AWEIMUGTaskModel : NSObject <NSCopying>

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *taskId;
@property (copy, nonatomic) NSString *activityId;
@property (copy, nonatomic) NSString *taskToken;
@property (nonatomic) double createTime;

- (id)initWithContentDict:(id)a0;
- (id)contentInfo;
- (id)initWithActivityId:(id)a0 taskId:(id)a1 taskToken:(id)a2 createTime:(double)a3;
- (id)extLogInfo;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
