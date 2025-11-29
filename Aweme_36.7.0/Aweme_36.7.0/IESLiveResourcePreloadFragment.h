@class NSString, UIView;
@protocol IESHYContainerProtocol;

@interface IESLiveResourcePreloadFragment : IESLiveRoomComponent <HTSLiveMessageSubscriber, IESHYHybridViewLifecycleProtocol>

@property (retain, nonatomic) UIView<IESHYContainerProtocol> *lynxView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)createLynxViewWithMessage:(id)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
