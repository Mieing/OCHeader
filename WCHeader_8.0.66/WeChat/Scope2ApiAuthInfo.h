@class NSString, NSMutableArray;

@interface Scope2ApiAuthInfo : NSObject

@property (nonatomic) unsigned int scopeStatus;
@property (retain, nonatomic) NSString *scopeDesc;
@property (retain, nonatomic) NSMutableArray *apiList;

- (void).cxx_destruct;

@end
