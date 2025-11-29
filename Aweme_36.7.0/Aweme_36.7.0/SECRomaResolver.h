@class NSMutableDictionary, NSDictionary, SECURLTrie, NSString, SECMetrics;

@interface SECRomaResolver : NSObject

@property (retain, nonatomic) SECURLTrie *urlTrie;
@property (retain, nonatomic) NSMutableDictionary *mutablePatternDict;
@property (retain, nonatomic) NSMutableDictionary *mutableUrlDict;
@property (readonly, copy, nonatomic) NSDictionary *patternDict;
@property (readonly, copy, nonatomic) NSDictionary *urlDict;
@property (nonatomic) unsigned long long version;
@property (copy, nonatomic) NSString *fromProvider;
@property (retain, nonatomic) SECMetrics *metrics;

- (void)parseConfig:(id)a0;
- (void)parseConfigItem:(id)a0;
- (void).cxx_destruct;
- (void)resolve:(id)a0;
- (id)init;

@end
