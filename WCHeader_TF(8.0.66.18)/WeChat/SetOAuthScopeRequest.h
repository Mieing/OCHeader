@class BaseRequest, NSString, NSMutableArray;

@interface SetOAuthScopeRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appId;
@property (nonatomic) unsigned int scopeCount;
@property (retain, nonatomic) NSMutableArray *scopeList;

+ (void)initialize;

@end
