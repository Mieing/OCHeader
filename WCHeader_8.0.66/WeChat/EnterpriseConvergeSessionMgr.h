@class NSString, NSMutableDictionary;

@interface EnterpriseConvergeSessionMgr : MMUserService <IEnterpriseSessionMgrExt, IEnterpriseBrandSessionMgrExt, MMServiceProtocol> {
    NSMutableDictionary *_dicMainUserName2ConvergedSessionList;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onServiceInit;
- (id)getAllSessionInfoList:(id)a0;
- (unsigned int)sessionCountForMainBrand:(id)a0;
- (void)onEnterpriseBrandSessionsChanged:(id)a0;
- (void)onEnterpriseChatSessionChanged:(id)a0;
- (void)updateConvergeSessionList:(id)a0;
- (id)sortAndConvergeSessionList:(id)a0 chatSessionList:(id)a1;
- (void)updateAndConvergeMainSession:(id)a0;
- (void).cxx_destruct;

@end
