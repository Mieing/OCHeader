@class NSDictionary, SECURLTrie;

@interface SECURLFormatter : NSObject

@property (retain) SECURLTrie *trie;
@property (copy) NSDictionary *trieMap;
@property (copy) NSDictionary *policy;

+ (id)sharedFormatter;

- (void)updateNormalizeRules:(id)a0;
- (void).cxx_destruct;

@end
