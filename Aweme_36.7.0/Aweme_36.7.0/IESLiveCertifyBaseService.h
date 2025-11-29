@class IESLiveCustomRequestModel, NSString;
@protocol IESLiveFullLinkMonitor, IESLiveHTTPClient;

@interface IESLiveCertifyBaseService : NSObject <IESLiveCertifyService>

@property (retain, nonatomic) IESLiveCustomRequestModel *paramsModel;
@property (retain, nonatomic) id<IESLiveHTTPClient> client;
@property (nonatomic) BOOL isRechargeCetify;
@property (nonatomic) BOOL isSkipCallBack;
@property (copy, nonatomic) id /* block */ certifyCompletionBlock;
@property (retain, nonatomic) id<IESLiveFullLinkMonitor> fullLinkMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)attachingDIContext;
- (id)handleError:(id)a0 withResponseObj:(id)a1;
- (void)handleCertifyWithParamsModel:(id)a0 withCompleteBlock:(id /* block */)a1;
- (id)trackDictionary;
- (BOOL)needCertifyProcess:(id)a0;
- (BOOL)pr_isCertifyForRecharge:(id)a0;
- (id)handleError:(id)a0 withExtraString:(id)a1;
- (void)showFailMessage:(id)a0 withCompletion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
