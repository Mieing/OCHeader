@class NSString;
@protocol IESLivePiperProtocol;

@interface IESLiveCommunityBaseJSBHandlerToolsAdapterImpl : IESLiveBaseAdapter <IESLiveCommunityBaseJSBHandlerToolsAdapter>

@property (weak, nonatomic) id<IESLivePiperProtocol> piper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)realLoginProcessWithCallback:(id /* block */)a0 needCallBack:(BOOL)a1 throughAweme:(BOOL)a2 delayTime:(id)a3 extraParams:(id)a4 userInfo:(id)a5 version:(unsigned int)a6 themeId:(id)a7 loginDesc:(id)a8 enterFrom:(id)a9;
- (void)handleOpenLive:(id)a0 container:(id)a1 piper:(id)a2 block:(id /* block */)a3;
- (void).cxx_destruct;

@end
