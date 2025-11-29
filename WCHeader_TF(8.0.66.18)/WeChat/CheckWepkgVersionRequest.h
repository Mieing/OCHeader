@class BaseRequest, NSMutableArray;

@interface CheckWepkgVersionRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *clientPkgVersionList;

+ (void)initialize;

- (void)setClientPkgVersionList:(id)a0;
- (id)clientPkgVersionList;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
