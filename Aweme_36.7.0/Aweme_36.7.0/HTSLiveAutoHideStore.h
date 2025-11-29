@class NSString;
@protocol IESLiveRoomService, HTSLiveAutoHideReaction;

@interface HTSLiveAutoHideStore : NSObject <HTSLiveAutoHideAction, IESLiveTapAction, IESLiveUserInteractActions>

@property (nonatomic) BOOL isUserInteracting;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (weak, nonatomic) id<HTSLiveAutoHideReaction> reaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)hideComponentsForPortrait;
- (id)initWithRoomModel:(id)a0;
- (void)forceShow;
- (void)forceHide;
- (void)zoneClicked:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)setup;

@end
