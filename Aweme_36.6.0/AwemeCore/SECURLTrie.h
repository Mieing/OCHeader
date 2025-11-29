@class SECURLTrieNode;
@protocol SECURLWildcard;

@interface SECURLTrie : NSObject {
    SECURLTrieNode *_root;
    id<SECURLWildcard> _wildcardResolver;
}

- (id)initWithURLs:(id)a0 wildcardResolver:(id)a1;
- (id)matchPath:(id)a0;
- (void)buildTries:(id)a0;
- (void).cxx_destruct;
- (void)addURL:(id)a0;
- (id)initWithURLs:(id)a0;

@end
