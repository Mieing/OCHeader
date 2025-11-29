@class NSString, NSArray, NSValueTransformer;

@interface MTLMultiKeyPathsValueTransformer : NSValueTransformer

@property (copy, nonatomic) NSString *propertyName;
@property (copy, nonatomic) NSArray *keyPaths;
@property (retain, nonatomic) NSValueTransformer *valueTransformer;

- (void).cxx_destruct;
- (id)transformedValue:(id)a0;

@end
