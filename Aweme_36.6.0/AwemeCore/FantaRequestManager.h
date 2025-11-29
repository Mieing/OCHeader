@class NSSet, NSDictionary;

@interface FantaRequestManager : NSObject

@property (copy, nonatomic) NSSet *preRequestWhiteList;
@property (copy, nonatomic) NSSet *postRequestWhiteList;
@property (copy, nonatomic) NSDictionary *requestInjectFeatureMap;

+ (id)sharedInstance;

- (void)injectFeatureToRequestUrl:(id)a0;
- (void)parseFeatureInjectConfig;
- (void)launchRequestInterceptor;
- (void)launchPreRequestInterceptor;
- (void)injectFeatureToRequestPostBody:(id)a0;
- (void)injectFeatureToPreRequest:(id)a0 model:(id)a1;
- (BOOL)checkRequestV2:(id)a0 withFilterRule:(id)a1;
- (void)recursiveRebuildRequestParamWithPathIndex:(long long)a0 preParamDict:(id)a1 requestConfig:(id)a2 featureConfigs:(id)a3 error:(id *)a4;
- (void)injectFeatureToJsonPostBodyWithRequest:(id)a0 bodyString:(id)a1 featureInjectConfigs:(id)a2 error:(id *)a3;
- (void)injectFeatureToFormEncodePostBodyWithRequest:(id)a0 bodyString:(id)a1 featureInjectConfigs:(id)a2;
- (BOOL)checkRequest:(id)a0 withFilterRule:(id)a1;
- (id)queryParamDictWithString:(id)a0;
- (id)URLQueryStringWithEncodingWithDict:(id)a0;
- (id)produceFeatureWithConfig:(id)a0 requestConfig:(id)a1;
- (id)toJSONDict:(id)a0;
- (id)toJSONDict:(id)a0 error:(id *)a1;
- (id)toJSONString:(id)a0 error:(id *)a1;
- (void)launchRequestManager;
- (id)tryEncodeJsonString:(id)a0;
- (id)tryDecodeJsonDictionary:(id)a0;
- (void).cxx_destruct;
- (id)toJSONString:(id)a0;

@end
