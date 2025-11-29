@class NSString, NSDictionary, SECURLTrie, NSURL;

@interface SECRouterFormatTask : NSObject <SECURLFormatProtocol>

@property (retain, nonatomic) SECURLTrie *trie;
@property (copy, nonatomic) NSDictionary *trieMap;
@property (copy, nonatomic) NSDictionary *policy;
@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) NSURL *formattedResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskWithURLString:(id)a0;

- (void)prepareURL;
- (id)executePolicy:(id)a0 withPattern:(id)a1;
- (id)rulerParams;
- (id)normalizeURL;
- (void).cxx_destruct;
- (id)initWithURLString:(id)a0;
- (id)formatURL;

@end
