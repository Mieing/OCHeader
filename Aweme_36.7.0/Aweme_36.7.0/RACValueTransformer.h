@interface RACValueTransformer : NSValueTransformer

@property (copy, nonatomic) id /* block */ transformBlock;

+ (BOOL)allowsReverseTransformation;
+ (id)transformerWithBlock:(id /* block */)a0;

- (void).cxx_destruct;
- (id)transformedValue:(id)a0;

@end
