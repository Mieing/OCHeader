@class NSString, IESLiveStreamDispatcherAPI;

@interface AWELivePreStreamPullStreamControlElement : AWELiveBusinessBaseElement <AWELivePreStreamMessageSubscriber>

@property (retain, nonatomic) IESLiveStreamDispatcherAPI *api;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)preloadElement;
- (void)onMessageReceivce:(id)a0 withDict:(id)a1;
- (void)p_handleDisableTemplateMessage:(id)a0;
- (void)requestWithRandom:(id)a0 Data:(id)a1;
- (void)handleControlParams:(id)a0;
- (int)shuffleTime:(int)a0 upper:(int)a1;
- (id)pr_convertToDict:(id)a0;
- (void)sendToPlayerProvider:(id)a0;
- (id)pr_convertToDict:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)reset;

@end
