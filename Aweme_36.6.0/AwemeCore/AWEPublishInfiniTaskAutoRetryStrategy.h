@class NSString;

@interface AWEPublishInfiniTaskAutoRetryStrategy : NSObject

@property (nonatomic) BOOL forceUpdateAuthKey;
@property (nonatomic) BOOL jumpMerge;
@property (nonatomic) BOOL jumpUpload;
@property (nonatomic) double uploadStageRetryDelay;
@property (nonatomic) long long errorCode;
@property (retain, nonatomic) NSString *errorStrageType;
@property (retain, nonatomic) NSString *errorMsg;

+ (id)strategyWithStage:(id)a0;
+ (id)autoRetryStrategy:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;

@end
