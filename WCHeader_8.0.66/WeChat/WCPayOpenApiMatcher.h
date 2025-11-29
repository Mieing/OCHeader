@class NSMutableArray;

@interface WCPayOpenApiMatcher : NSObject

@property (retain, nonatomic) NSMutableArray *m_matchArray;

+ (id)shareInstance;

- (id)init;
- (BOOL)matchApi:(id)a0;
- (void).cxx_destruct;

@end
