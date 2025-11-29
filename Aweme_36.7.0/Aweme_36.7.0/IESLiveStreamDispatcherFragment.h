@class NSString, IESLiveStreamDispatcherAPI;
@protocol HTSLiveStreamPlayerProvider, IESLiveRealStreamingProvider;

@interface IESLiveStreamDispatcherFragment : IESLiveRoomComponent <HTSLiveMessageSubscriber>

@property (retain, nonatomic) IESLiveStreamDispatcherAPI *api;
@property (retain, nonatomic) id<IESLiveRealStreamingProvider> streamingProvider;
@property (retain, nonatomic) id<HTSLiveStreamPlayerProvider> playerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentCreate;
- (void)p_handleDisableTemplateMessage:(id)a0;
- (void)requestWithRandom:(id)a0 Data:(id)a1;
- (void)handleControlParams:(id)a0;
- (int)shuffleTime:(int)a0 upper:(int)a1;
- (id)pr_convertToDict:(id)a0;
- (void)sendToPlayerProvider:(id)a0;
- (id)pr_convertToDict:(id)a0 error:(id *)a1;
- (void)sendToLiveCore:(id)a0;
- (void).cxx_destruct;
- (void)setup;
- (void)messageReceived:(id)a0;

@end
