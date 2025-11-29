@class NSString, NSMutableDictionary, NSDictionary;
@protocol IESLiveLocationService, IESLiveLanguageService, IESLiveCertifyCenter, IESLiveNetworkQualityInfoService, IESLiveHTTPClient, IESLiveAppInfo;

@interface IESLiveHTTPClientWrapper : NSObject <IESLiveHTTPClient> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _wrLock;
}

@property (retain, nonatomic) id<IESLiveLanguageService> languageService;
@property (retain, nonatomic) id<IESLiveCertifyCenter> certifyCenter;
@property (retain, nonatomic) id<IESLiveLocationService> locationService;
@property (retain, nonatomic) id<IESLiveNetworkQualityInfoService> networkQualityInfoService;
@property (retain, nonatomic) id<IESLiveAppInfo> appInfo;
@property (copy, nonatomic) NSString *domain;
@property (retain, nonatomic) NSMutableDictionary *injectdCommonParams;
@property (nonatomic) BOOL enableNetflowTag;
@property (retain, nonatomic) NSMutableDictionary *commonHeaders;
@property (copy, nonatomic) id /* block */ pathMapBlock;
@property (retain, nonatomic) id<IESLiveHTTPClient> client;
@property (nonatomic, getter=isTeenMode) BOOL teenMode;
@property (copy, nonatomic) NSDictionary *mainThreadParams;
@property (retain, nonatomic) id certifyService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getCurrentHostURL;

- (id)extensionUserDefaultsSuitName;
- (id)commonParametersWithoutL0;
- (id)commonParametersWithUrlString:(id)a0;
- (id)baseHostURL;
- (id)requestWithParamsModel:(id)a0;
- (id)handleError:(id)a0 withResponseObj:(id)a1;
- (id)requestIdForResponseObj:(id)a0;
- (id)logIDForResponseObj:(id)a0;
- (id)uploadFileData:(id)a0 URLString:(id)a1 progress:(id *)a2 parameters:(id)a3 completionHandler:(id /* block */)a4 fileType:(long long)a5;
- (BOOL)netflowTag;
- (void)setNetflowTag:(BOOL)a0;
- (id)baseURLWithRelativePath:(id)a0;
- (id)URLStringByAppendingPath:(id)a0;
- (id)URLStringByAppendingCompletePath:(id)a0;
- (BOOL)shouldUpdateSharedCookie;
- (id)postForJSON:(id)a0 parameters:(id)a1 headerFields:(id)a2 completion:(id /* block */)a3;
- (id)get:(id)a0 parameters:(id)a1 headerFields:(id)a2 completion:(id /* block */)a3;
- (id)post:(id)a0 parameters:(id)a1 headerFields:(id)a2 completion:(id /* block */)a3;
- (id)postForBinary:(id)a0 parameters:(id)a1 completion:(id /* block */)a2;
- (id)postForBinary:(id)a0 parameters:(id)a1 headerFields:(id)a2 completion:(id /* block */)a3;
- (id)URLString:(id)a0 appendCommonParams:(id)a1;
- (id)configDomain;
- (id)initWithClient:(id)a0 commonParams:(id)a1;
- (void)recordCommonParams;
- (id)commonPathWithRelativePath:(id)a0;
- (void)_checkIfAPIPathEndsWithSlash:(id)a0;
- (id)buildSafeCommonParamsWithUrlString:(id)a0 withoutL0:(BOOL)a1;
- (void)_checkApprovedWithURL:(id)a0;
- (void)updateSharedCookieForURL:(id)a0;
- (void)requestCallbackWithResponseCallback:(id /* block */)a0 requestError:(id)a1 finishModel:(id)a2;
- (id)policyDecisionRequestMethodWithRequestModel:(id)a0;
- (void)trackByteLinkAgentIfNeedWithError:(id)a0 finishModel:(id)a1;
- (BOOL)containsCookie:(id)a0 forCookies:(id)a1;
- (void).cxx_destruct;
- (void)setValue:(id)a0 forHTTPHeaderField:(id)a1;
- (id)baseURL;
- (id)initWithClient:(id)a0;
- (void)dealloc;

@end
