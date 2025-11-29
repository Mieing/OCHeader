@class IESLiveInteractionLayout, NSString, UIView;
@protocol IESLiveInteractionLinkerService;

@interface IESLiveRtcMcuComponent : IESLiveInteractComponentBase <IESLiveRtcMcuProvider, IESLiveInteractionLinkerServiceAction, IESLiveSocialInteractAction>

@property (retain, nonatomic) UIView *mcuCanvas;
@property (weak, nonatomic) id<IESLiveInteractionLinkerService> linker;
@property (copy, nonatomic) id /* block */ loadPublicViewAction;
@property (retain, nonatomic) IESLiveInteractionLayout *cacheLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)currentLayoutUIDidBuild;
- (BOOL)shouldMuteOtherRoomRTCStream;
- (void)interactionLinkerService:(id)a0 startPlayPublicStreamResult:(BOOL)a1 needVideoCanvas:(BOOL)a2;
- (void)interactionLinkerService:(id)a0 stopPlayPublicStreamResult:(BOOL)a1;
- (void)componentBindContext;
- (void)componentDidUpdatedGuestList:(id)a0;
- (void)destroyPublicStreamCanvas;
- (void).cxx_destruct;

@end
