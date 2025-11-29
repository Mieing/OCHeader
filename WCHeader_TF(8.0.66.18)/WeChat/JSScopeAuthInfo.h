@class NSString, NSMutableArray;

@interface JSScopeAuthInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *scope;
@property (nonatomic) unsigned int scopeStatus;
@property (retain, nonatomic) NSString *scopeDesc;
@property (retain, nonatomic) NSMutableArray *apiname;

+ (void)initialize;

@end
