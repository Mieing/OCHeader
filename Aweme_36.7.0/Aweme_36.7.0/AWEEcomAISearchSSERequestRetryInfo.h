@class NSDictionary, NSError;

@interface AWEEcomAISearchSSERequestRetryInfo : NSObject

@property (copy, nonatomic) NSDictionary *response;
@property (nonatomic) long long reason;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;

@end
