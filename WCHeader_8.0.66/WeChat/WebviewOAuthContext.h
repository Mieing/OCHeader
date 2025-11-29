@class NSArray, WAAuthorizeResultInfo;

@interface WebviewOAuthContext : MMObject

@property (retain, nonatomic) NSArray *scopeList;
@property (retain, nonatomic) WAAuthorizeResultInfo *resultInfo;

- (void).cxx_destruct;

@end
