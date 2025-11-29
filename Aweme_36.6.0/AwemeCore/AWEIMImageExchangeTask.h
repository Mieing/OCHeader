@class NSString;

@interface AWEIMImageExchangeTask : AWEIMUGTaskModel

@property (copy, nonatomic) NSString *messageID;
@property (copy, nonatomic) NSString *buriedInfo;
@property (nonatomic) BOOL isRequestingTask;

- (id)initWithContentDict:(id)a0;
- (id)contentInfo;
- (id)initWithActivityId:(id)a0 taskId:(id)a1 taskToken:(id)a2 createTime:(double)a3;
- (id)initWithMessageID:(id)a0 activityId:(id)a1 taskId:(id)a2 taskToken:(id)a3;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
