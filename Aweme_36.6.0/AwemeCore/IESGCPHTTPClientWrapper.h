@class NSString;
@protocol IESGCPNetworkQualityInfoService, IESGCPLocationService, IESGCPLanguageService, IESGCPHTTPClient;

@interface IESGCPHTTPClientWrapper : NSObject <IESGCPHTTPClient> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _wrLock;
}

@property (retain, nonatomic) id<IESGCPHTTPClient> client;
@property (retain, nonatomic) id<IESGCPLanguageService> languageService;
@property (retain, nonatomic) id<IESGCPLocationService> locationService;
@property (retain, nonatomic) id<IESGCPNetworkQualityInfoService> networkQualityInfoService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (id)requestWithParamsModel:(id)a0;
- (id)handleError:(id)a0 withResponseObj:(id)a1;
- (id)requestIdForResponseObj:(id)a0;
- (id)logIDForResponseObj:(id)a0;
- (id)postForJSON:(id)a0 parameters:(id)a1 headerFields:(id)a2 completion:(id /* block */)a3;
- (id)get:(id)a0 parameters:(id)a1 headerFields:(id)a2 completion:(id /* block */)a3;
- (id)post:(id)a0 parameters:(id)a1 headerFields:(id)a2 completion:(id /* block */)a3;
- (id)headerByTint:(id)a0;
- (id)buildSafeCommonParamsWithUrlString:(id)a0;
- (void)setMainThreadParams:(id)a0;
- (id)mainThreadParams;
- (void)reportGameCPNetworkCommonParamsWithUrlString:(id)a0 commonParams:(id)a1;
- (void).cxx_destruct;

@end
