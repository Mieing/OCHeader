@class NSDictionary, NSMutableDictionary;

@interface BDPCDDynamicCardTemplateModelCacheUtil : NSObject

@property (copy) NSDictionary *geckoMappingDict;
@property (copy) NSDictionary *cdnMappingDict;
@property (retain, nonatomic) NSMutableDictionary *geckoTemplateModelDict;
@property (retain, nonatomic) NSMutableDictionary *cdnTemplateModelDict;
@property (retain, nonatomic) NSMutableDictionary *httpTemplateModelDict;

+ (id)sharedInstance;

- (id)cdnTemplateMapping;
- (void)cacheCDNTemplateMappingWithDict:(id)a0;
- (id)cdnTemplateModelWithModel:(id)a0;
- (void)cacheCDNTemplateModelWithCacheKeyModel:(id)a0 templateModel:(id)a1;
- (id)httpTemplateModelWithModel:(id)a0;
- (void)cacheHttpTemplateModelWithCacheKeyModel:(id)a0 templateModel:(id)a1;
- (id)geckoTemplateMapping;
- (void)cacheGeckoTemplateMappingWithDict:(id)a0;
- (id)geckoTemplateModelWithModel:(id)a0;
- (void)cacheGeckoTemplateModelWithCacheKeyModel:(id)a0 templateModel:(id)a1;
- (id)cacheKeyWithCacheKeyModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)resetCache;

@end
