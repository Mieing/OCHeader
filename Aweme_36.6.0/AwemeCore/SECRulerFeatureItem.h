@class NSString, SECRulerTree;

@interface SECRulerFeatureItem : NSObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) SECRulerTree *rule;
@property (copy, nonatomic) NSString *cacheKey;
@property (copy, nonatomic) NSString *cacheName;
@property (nonatomic) unsigned long long sampleRate;

- (void)setupWithDict:(id)a0;
- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
