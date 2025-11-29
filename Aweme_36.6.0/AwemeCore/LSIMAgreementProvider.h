@class NSError, NSString, NSObject;
@protocol LSIMAlertControllerProtocol;

@interface LSIMAgreementProvider : NSObject <LSIMUserMessageNotify>

@property (nonatomic) BOOL agreed;
@property (nonatomic) BOOL networkAgreed;
@property (nonatomic) BOOL isShowingAgreementAlert;
@property (retain, nonatomic) NSObject<LSIMAlertControllerProtocol> *dialog;
@property (retain, nonatomic) NSError *lastError;
@property (nonatomic) BOOL isReuqestingShow;
@property (nonatomic) BOOL isReuqestingAgree;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)userDidLogout;
- (void)p_transferToWebLink:(id)a0;
- (void)p_confirmAgreementAction;
- (void)p_show:(id /* block */)a0;
- (void)requestAndShowAgreementAlertIfNeedWithCompletion:(id /* block */)a0;
- (id)hostDomain;
- (void)p_requestForShowWithCompletion:(id /* block */)a0 remainCount:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
