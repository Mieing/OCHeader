@class NSDictionary, SECURLTrie;

@interface SECTTNetPathConfig : NSObject

@property (copy, nonatomic) NSDictionary *config;
@property (retain, nonatomic) SECURLTrie *pathTrie;

- (void)resolveConfig:(id)a0;
- (id)configByPath:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
