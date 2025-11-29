@class NSString;

@interface AWEIMFace2FaceGroupTask : AWEIMUGTaskModel

@property (copy, nonatomic) NSString *groupId;
@property (nonatomic) BOOL hasSendInitNotice;
@property (nonatomic) BOOL hasSendMessage;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL isRequestingTask;

- (id)initWithContentDict:(id)a0;
- (id)contentInfo;
- (id)extLogInfo;
- (id)initWithGroupId:(id)a0 enterFrom:(id)a1 activityId:(id)a2 taskId:(id)a3 taskToken:(id)a4;
- (void).cxx_destruct;
- (id)taskName;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
