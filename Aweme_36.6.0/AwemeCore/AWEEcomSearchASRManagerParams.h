@class NSString;

@interface AWEEcomSearchASRManagerParams : NSObject

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *asrAddress;
@property (copy, nonatomic) NSString *asrUri;
@property (nonatomic) long long maxDuration;

- (void).cxx_destruct;

@end
