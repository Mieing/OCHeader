@class EnterpriseConnectorContext, NSString, ShareMessageConfirmLogicHelper, JSEvent;
@protocol EnterpriseConnectorLogicDelegate;

@interface EnterpriseConnectorLogic : NSObject <EnterpriseBrandContactSelectViewControllerDelegate, EnterpriseSessionSelectViewControllerDelegate, ShareMessageConfirmLogicHelperDelegate> {
    EnterpriseConnectorContext *_context;
    NSString *_scopeBrand;
    NSString *_targetBrand;
    NSString *_targetEnterpriseChat;
    ShareMessageConfirmLogicHelper *_jsSendAppMsgHelper;
    JSEvent *_jsEvent;
}

@property (weak, nonatomic) id<EnterpriseConnectorLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContextBrand:(id)a0 contextEnterpriseChat:(id)a1;
- (void)selectTargetInScope:(id)a0 viewController:(id)a1;
- (void)useContextAsTarget;
- (id)getContext;
- (void)clearTarget;
- (void)connectWithMsgWrap:(id)a0 extraData:(id)a1;
- (BOOL)hasEnterpriseChatContext;
- (BOOL)checkTarget;
- (void)OnEnterpriseSelectSession:(id)a0 viewController:(id)a1;
- (void)OnEnterpriseCancelSelectSession:(id)a0;
- (void)onEnterpriseSelectBrandContact:(id)a0 viewController:(id)a1;
- (void)onEnterpriseCancelSelectBrand:(id)a0;
- (void)OnSendMessageOK:(id)a0;
- (void)OnSendMessageFail:(id)a0 WithError:(unsigned long long)a1;
- (void)OnSendMessageCancel:(id)a0;
- (BOOL)isSendEnterpriseChat:(id)a0;
- (BOOL)isSendAppMessage:(id)a0;
- (void)cancelConnect;
- (void)errorConnect;
- (void)callDelegateConnectSucceed;
- (void)callDelegateConnectFail;
- (void).cxx_destruct;

@end
