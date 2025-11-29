@interface FantaRequestPureFeatureProducer : FantaFeatureProducer

@property (copy, nonatomic) id /* block */ featureProducer;

- (long long)type;

@end
