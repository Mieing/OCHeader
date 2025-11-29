@interface AWEModelLayerBaseValueTransformer : NSValueTransformer

@property (copy, nonatomic) id /* block */ transformBlock;
@property (copy, nonatomic) id /* block */ reverseTransformBlock;

+ (id)transformerWithTransformBlock:(id /* block */)a0 reverseTransformBlock:(id /* block */)a1;
+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (id)transformedValue:(id)a0 forKey:(id)a1 extra:(id)a2;
- (id)reverseTransformedValue:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;

@end
