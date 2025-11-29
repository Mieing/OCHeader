@interface AWEIMGrowthImpl.HunterServiceImpl : HTSService <IESIMHunterService>

- (id)hunterContainer;
- (void)openHunterContainerWithModel:(id)a0;
- (void)registerBizClientDataInjectBlock:(id /* block */)a0 forBizScene:(id)a1;
- (void)registerBizServerDataInjectBlock:(id /* block */)a0 forBizScene:(id)a1;
- (id)buildHunterClientDataWithConversation:(id)a0 message:(id)a1 bizClientData:(id)a2 queryParams:(id)a3;
- (void)openHunterContainerWithModel:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;

@end
