@class NSString, HTSLiveRoomAPI;
@protocol HTSLiveStreamPlayerProvider;

@interface IESLivePullStreamChangeFragment : IESLiveRoomComponent <HTSLiveMessageSubscriber>

@property (retain, nonatomic) HTSLiveRoomAPI *roomApi;
@property (retain, nonatomic) id<HTSLiveStreamPlayerProvider> playerProvider;
@property (copy, nonatomic) id /* block */ delayedRequestTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentUnmount;
- (int)shuffleTime:(int)a0 upper:(int)a1;
- (void)requestWithScene:(id)a0 subScene:(id)a1 random:(id)a2;
- (void)handleBusinessWith:(id)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
