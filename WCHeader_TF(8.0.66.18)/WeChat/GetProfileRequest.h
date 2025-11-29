@class BaseRequest, NSString;

@interface GetProfileRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *userName;

+ (void)initialize;

- (void)setUserName:(id)a0;
- (id)userName;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
