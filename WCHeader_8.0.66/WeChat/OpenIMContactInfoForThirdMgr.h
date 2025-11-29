@class NSString, ContactSearchLogic, OpenIMContactInfoForThirdReqFetchContext;

@interface OpenIMContactInfoForThirdMgr : MMUserService <ContactSearchLogicDelegate, MMServiceProtocol> {
    ContactSearchLogic *m_contactSearchLogic;
    OpenIMContactInfoForThirdReqFetchContext *m_reqContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleOpenIMContactForThirdWithUrl:(id)a0 viewController:(id)a1 scene:(unsigned int)a2 spamContext:(id)a3 context:(id)a4 onSuccess:(id /* block */)a5 onFail:(id /* block */)a6;
- (void)handleOpenIMContactForThirdWithDic:(id)a0 viewController:(id)a1 scene:(unsigned int)a2 spamContext:(id)a3 context:(id)a4 onSuccess:(id /* block */)a5 onFail:(id /* block */)a6;
- (void)onContactSearchLogicDoneForThird:(id)a0 thirdFromScene:(unsigned int)a1 spamWording:(id)a2 extInfo:(id)a3;
- (void)onContactSearchLogicFailForThird:(id)a0 extInfo:(id)a1;
- (void)reportShowOpenIMProfileForThirdLogWithAction:(unsigned int)a0 allowResultType:(unsigned int)a1 sourceScene:(unsigned int)a2;
- (void).cxx_destruct;

@end
