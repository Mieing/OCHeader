@class NSString, NSDictionary;
@protocol SECURLWildcard;

@interface SECURLTrieNode : NSObject {
    NSString *_part;
    NSDictionary *_children;
    BOOL _endOfPath;
    SECURLTrieNode *_matchAll;
    SECURLTrieNode *_wildcardNode;
    id<SECURLWildcard> _wildcardResolver;
}

@property (copy, nonatomic) NSString *path;

- (id)addKey:(id)a0 real:(BOOL)a1;
- (id)initWithWildcardResolver:(id)a0;
- (id)addMatchAll:(id)a0 real:(BOOL)a1;
- (id)addFixed:(id)a0 real:(BOOL)a1;
- (id)addWildcard:(id)a0 real:(BOOL)a1;
- (id)match:(id)a0;
- (void).cxx_destruct;
- (id)addPaths:(id)a0;

@end
