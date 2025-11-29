@class NSString;

@interface AWELiteRedPacketRequestModel : NSObject

@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL isRetry;
@property (nonatomic) unsigned long long retryRequestCount;
@property (nonatomic) BOOL isLostUser;
@property (copy, nonatomic) NSString *storeKey;
@property (copy, nonatomic) id /* block */ continueBlock;

+ (id)defaultRequestModel;

- (void).cxx_destruct;

@end
