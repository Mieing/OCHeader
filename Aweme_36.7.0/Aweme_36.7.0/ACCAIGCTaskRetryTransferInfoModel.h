@class NSString;

@interface ACCAIGCTaskRetryTransferInfoModel : NSObject

@property (nonatomic) unsigned long long fromType;
@property (nonatomic) unsigned long long retryPolicy;
@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) NSString *fromTaskID;
@property (nonatomic) BOOL useDowngradePath;
@property (nonatomic) unsigned long long downgradeType;

- (void).cxx_destruct;

@end
