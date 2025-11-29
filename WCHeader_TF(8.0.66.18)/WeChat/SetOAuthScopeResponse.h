@class BaseRequest, NSMutableArray;

@interface SetOAuthScopeResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int scopeCount;
@property (retain, nonatomic) NSMutableArray *scopeList;

+ (void)initialize;

@end
