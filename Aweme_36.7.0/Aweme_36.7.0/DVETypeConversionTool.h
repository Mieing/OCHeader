@interface DVETypeConversionTool : NSObject

+ (void)dictionaryFromObject:(id)a0 ruleGroup:(id)a1 completeBlock:(id /* block */)a2;
+ (void)registerClass:(Class)a0 ruleGroup:(id)a1;
+ (id)cachedClassPropertiesOperationQueue;
+ (id)cachedClassContextDictionary;
+ (id)arrayWithObject:(id)a0 ruleGroup:(id)a1;
+ (id)dictionaryWithObject:(id)a0 ruleGroup:(id)a1;

@end
