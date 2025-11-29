@interface FantaSequenceFeatureProducer : FantaFeatureProducer

@property (readonly, copy, nonatomic) id /* block */ featureProducer;
@property (readonly, copy, nonatomic) id /* block */ featureContextProducer;

- (id)initWithFeatureKey:(id)a0 featureProducer:(id /* block */)a1 contextProducer:(id /* block */)a2;
- (void).cxx_destruct;
- (long long)type;

@end
