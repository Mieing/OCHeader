@interface AWEImageTemplateListUtils : NSObject

+ (id)readImageTemplateListPannelResponseModelInfoWithCacheType:(unsigned long long)a0 scene:(long long)a1;
+ (id)readImageTemplateListCategoryResponseModelInfoWithCacheType:(unsigned long long)a0 scene:(long long)a1;
+ (void)clearImageTemplateListCache;
+ (id)templateListModelInfoCachePathWithCacheType:(unsigned long long)a0 scene:(long long)a1;
+ (id)templateListCategoryInfoCachePathWithCacheType:(unsigned long long)a0 scene:(long long)a1;
+ (id)getTemplateListInfoCacheDic;
+ (void)writeImageTemplateListCategoryResponseModelInfo:(id)a0 cacheType:(unsigned long long)a1 scene:(long long)a2;
+ (void)writeImageTemplateListPannelResponseModelInfo:(id)a0 cacheType:(unsigned long long)a1 scene:(long long)a2;

@end
