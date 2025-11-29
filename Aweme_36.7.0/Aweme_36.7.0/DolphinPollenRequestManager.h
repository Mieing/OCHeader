@class NSSet;

@interface DolphinPollenRequestManager : NSObject

@property (retain, nonatomic) NSSet *reqPathWhiteList;
@property (nonatomic) BOOL usePreRequestInterceptor;

- (void)configReqPathWhiteListIfNeeded;
- (void)handlePreRequest;
- (void)handlePostRequest;
- (void)configReqPathWhiteList;
- (void)injectFeaturesWithGetMethod:(id)a0;
- (void)injectFeaturesWithPostMethod:(id)a0;
- (id)getEncryptionType:(id)a0 path:(id)a1;
- (void)injectFeaturesToJsonBodyWithPostMethod:(id)a0;
- (void)injectFeaturesToFormUrlEncodeBodyWithPostMethod:(id)a0;
- (id)bodyStringWithRequest:(id)a0;
- (void)injectFeaturesWithFilterModel:(id)a0 toPreRequestPath:(id)a1;
- (void)handleRequest;
- (void).cxx_destruct;
- (id)init;

@end
