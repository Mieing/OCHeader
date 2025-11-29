@class NSString, NSMutableArray;

@interface BizScopeInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *scope;
@property (nonatomic) unsigned int scopeStatus;
@property (retain, nonatomic) NSString *scopeDesc;
@property (nonatomic) unsigned int apiCount;
@property (retain, nonatomic) NSMutableArray *apiList;

+ (void)initialize;

@end
