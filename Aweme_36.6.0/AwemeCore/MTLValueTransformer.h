@class NSString;

@interface MTLValueTransformer : NSValueTransformer <MTLTransformerErrorHandling>

@property (readonly, copy, nonatomic) id /* block */ forwardBlock;
@property (readonly, copy, nonatomic) id /* block */ reverseBlock;
@property (retain, nonatomic) Class modelClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bdx_auth_setStringValueTransformer;
+ (id)bdx_auth_arrayStringValueTransformer;
+ (id)bdx_auth_dictionaryValueTransformerWithModelClass:(Class)a0;
+ (id)bdx_auth_arrayOfDictionaryValueTransformerWithModelClass:(Class)a0;
+ (id)awe_codeGenModelTransformerWithClass:(Class)a0;
+ (id)awe_codeGenModelsArrayTransformerWithClass:(Class)a0;
+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;
+ (id)transformerUsingForwardBlock:(id /* block */)a0 reverseBlock:(id /* block */)a1;
+ (id)transformerUsingForwardBlock:(id /* block */)a0;
+ (id)transformerUsingReversibleBlock:(id /* block */)a0;
+ (id)transformerWithBlock:(id /* block */)a0;
+ (id)reversibleTransformerWithBlock:(id /* block */)a0;
+ (id)reversibleTransformerWithForwardBlock:(id /* block */)a0 reverseBlock:(id /* block */)a1;

@end
