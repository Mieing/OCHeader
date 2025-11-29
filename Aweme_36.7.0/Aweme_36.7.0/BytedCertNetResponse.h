@class NSString;

@interface BytedCertNetResponse : NSObject

@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *logId;

+ (id)responseWithTTNetHttpResponse:(id)a0;

- (id)initWithStatusCode:(long long)a0 logId:(id)a1;
- (void).cxx_destruct;

@end
