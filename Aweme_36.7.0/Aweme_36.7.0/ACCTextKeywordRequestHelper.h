@interface ACCTextKeywordRequestHelper : NSObject

+ (void)requestKeywordsWithRequestModel:(id)a0 timeOut:(double)a1 aigcRequestMeta:(id)a2 preferUseCache:(BOOL)a3 completion:(id /* block */)a4;
+ (id)getKeywordInfoCached:(id)a0;
+ (BOOL)isValidKeywordResult:(id)a0 tagList:(id)a1;
+ (void)clearKeywordInfoCached:(id)a0;
+ (void)requestKeywordsWithRequestModel:(id)a0 timeOut:(double)a1 aigcRequestMeta:(id)a2 completion:(id /* block */)a3;
+ (id)constructRequestDictionaryModelWith:(id)a0 aigcRequestMeta:(id)a1;
+ (id)parseKeywordResponseModel:(id)a0;
+ (void)cacheKeywordResult:(id)a0 originText:(id)a1;
+ (id)generateEffectParamWithRequestModel:(id)a0;

@end
