@class NSString;

@interface AWEIronManInteractionPluginError : NSObject

@property (copy, nonatomic) NSString *errorMsg;
@property (copy, nonatomic) NSString *errorType;
@property (nonatomic) long long errorCode;
@property (nonatomic) long long errorNo;

- (void).cxx_destruct;

@end
