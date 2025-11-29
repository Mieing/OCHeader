@class NSString;

@interface QFileTokenData : NSObject

@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSString *token;
@property (nonatomic) double expire;
@property (readonly, nonatomic) NSString *hostUrl;

- (id)initWithDict:(id)a0;
- (void).cxx_destruct;

@end
