@class NSString;

@interface BDUGBaseRequestParam : NSObject

@property (copy, nonatomic) NSString *aId;
@property (copy, nonatomic) NSString *deviceId;
@property (copy, nonatomic) NSString *installId;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *host;
@property (nonatomic) BOOL retryCount;

+ (id)requestParam;

- (void).cxx_destruct;

@end
