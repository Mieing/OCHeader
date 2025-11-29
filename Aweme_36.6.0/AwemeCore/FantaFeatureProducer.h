@class NSString;

@interface FantaFeatureProducer : NSObject

@property (nonatomic) BOOL enable;
@property (copy, nonatomic) NSString *featureKey;
@property (copy, nonatomic) id featureProducer;

- (id)initWithFeatureKey:(id)a0 featureProducer:(id)a1;
- (void).cxx_destruct;
- (long long)type;

@end
