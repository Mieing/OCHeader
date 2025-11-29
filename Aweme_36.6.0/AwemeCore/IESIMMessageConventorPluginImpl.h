@class NSString;

@interface IESIMMessageConventorPluginImpl : NSObject <IESIMMessageConventorPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedIntance;

- (id)generateMessageWithTTMsg:(id)a0 type:(long long)a1 contentDict:(id)a2;
- (id)generateMessageWithStrangerMsg:(id)a0 type:(long long)a1 aweType:(long long)a2 contentDict:(id)a3;
- (void)showTransferMoneyDetailWithMessage:(id)a0;
- (void)showTransferMoneyGroupDetailWithMessage:(id)a0;
- (id)makeQuoteReplyMessageWithMessageType:(long long)a0 refContentDic:(id)a1;
- (void)trackEnterpriseCompanyMessage:(id)a0 withParams:(id)a1;

@end
