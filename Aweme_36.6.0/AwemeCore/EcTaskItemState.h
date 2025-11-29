@class NSString;

@interface EcTaskItemState : NSObject

@property (readonly, nonatomic) NSString *awe_ECID;
@property (copy, nonatomic) NSString *taskKey;
@property (nonatomic) long long taskType;
@property (copy, nonatomic) NSString *assetId;
@property (copy, nonatomic) NSString *targetPath;
@property (nonatomic) long long state;
@property (nonatomic) int errCode;
@property (copy, nonatomic) NSString *errMsg;

- (id)initWithUploadModel:(id)a0;
- (void)displayTaskInfo;
- (void)updateState:(int)a0;
- (void).cxx_destruct;

@end
