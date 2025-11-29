@class AWESearchAIGCService, NSString, AWESearchAIGCSSEDataBuilderManager;

@interface AWESearchAIGCKeepAliveService : NSObject <AWESearchAIGCSSEDataBuilderManagerDelegate>

@property (retain, nonatomic) AWESearchAIGCSSEDataBuilderManager *SSEDataBuilderManager;
@property (weak, nonatomic) AWESearchAIGCService *aigcService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)checkHitKeepAlive:(id)a0;
- (BOOL)enableAigcUpdatePreserveDataForAiChatNode;
- (id)buildViewModelWithCMDModel:(id)a0 response:(id)a1;
- (void)handleAppendCmdModel:(id)a0;
- (long long)maxFirstScreenLoadCmdCount;
- (void)handleKeepAliveDynamicRenderNode:(id)a0 keepAliveData:(id)a1 context:(id)a2;
- (id)getCustomLynxDataWithViewModel:(id)a0 isRealTime:(BOOL)a1 isLastRound:(BOOL)a2 isKeepAlive:(BOOL)a3 context:(id)a4;
- (void)handleKeepAliveAllDataRenderFinishWithVMs:(id)a0;
- (id)getCachalotContext;
- (id)aigcServiceContext;
- (void)loadKeepAliveDataWithContext:(id)a0 keepAliveID:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (BOOL)keepAliveEnabled;

@end
