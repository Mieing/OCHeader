@interface BDXCommonCustomValueTransformer : NSObject

+ (id)enumTransformerWithDictionary:(id)a0;
+ (id)optionsTransformerWithDictionary:(id)a0;
+ (id)dictionaryValueTransformerWithModelClass:(Class)a0;
+ (id)dictionaryValueTransformerWithModelClassForwardBlock:(id)a0 success:(BOOL *)a1 error:(id *)a2 cls:(Class)a3 allowMisMatch:(BOOL)a4;
+ (id)dictionaryValueTransformerWithModelClassReverseBlock:(id)a0 success:(BOOL *)a1 error:(id *)a2 cls:(Class)a3 allowMisMatch:(BOOL)a4;
+ (id)maybeDictionaryValueTransformerWithModelClass:(Class)a0;
+ (id)colorTransformer;

@end
