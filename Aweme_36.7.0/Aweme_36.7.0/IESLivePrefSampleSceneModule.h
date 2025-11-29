@class NSString;
@protocol IESLiveRoomInteractionService, IESLiveInteractionModule;

@interface IESLivePrefSampleSceneModule : NSObject <IESLiveInteractAction, HTSLiveMessageSubscriber>

@property (retain, nonatomic) id<IESLiveInteractionModule> interactionModule;
@property (retain, nonatomic) id<IESLiveRoomInteractionService> roomInteractionService;
@property BOOL isAnchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)startInteractiveWithScene:(unsigned long long)a0;
- (void)endInteractiveWithScene:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
