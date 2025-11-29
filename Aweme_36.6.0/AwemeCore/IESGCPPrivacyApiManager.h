@class NSString;
@protocol IESGCPPrivacyApiService;

@interface IESGCPPrivacyApiManager : NSObject <IESGCPPrivacyApiService>

@property (retain, nonatomic) id<IESGCPPrivacyApiService> service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)openURL:(id)a0 withCert:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (void)openURL:(id)a0 withCert:(id)a1 error:(id *)a2;
- (void)requestAccessMicrophoneWithPrivacyCert:(id)a0 completionHandler:(id /* block */)a1;
- (id)createSKStoreWithCert:(id)a0 error:(id *)a1;
- (void)openURL:(id)a0 withCert:(id)a1 error:(id *)a2 context:(id)a3;
- (void)openURL:(id)a0 withCert:(id)a1 options:(id)a2 context:(id)a3 completionHandler:(id /* block */)a4;
- (BOOL)enableUserPrivacyApiWithPrivacyCert:(id)a0;
- (void).cxx_destruct;

@end
