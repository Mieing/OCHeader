@class NSMutableDictionary;

@interface IESECShopSLITemplateManager : NSObject {
    NSMutableDictionary *_sliceTemplates;
    NSMutableDictionary *_productsSliceConfigs;
}

+ (id)preloadTemplateList;
+ (id)sharedManager;

- (void)updateProductsSliceConfigs:(id)a0;
- (id)productsTemplate:(id)a0 spanSize:(unsigned long long)a1;
- (id)templateForType:(id)a0 name:(id)a1;
- (id)templateUniqueKeyWithType:(id)a0 name:(id)a1;
- (id)localTemplateList;
- (void)updateSwsSliceConfigs:(id)a0;
- (void).cxx_destruct;

@end
