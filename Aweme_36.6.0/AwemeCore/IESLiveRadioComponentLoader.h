@class IESLiveInteractComponentLoaderBase, HTSEventContext, NSString, IESLiveComponentContext;
@protocol IESLiveRoomService;

@interface IESLiveRadioComponentLoader : NSObject <IESLiveRevenueInteractAction, HTSLiveRoomRemoteActions, IESLiveSocialInteractAction, IESLiveInteractComponentContext>

@property (retain, nonatomic) IESLiveInteractComponentLoaderBase *loader;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentMount;
- (void)componentUnmount;
- (void)didSetAttachingDIContext;
- (void)startRevenueInteractWithScene:(unsigned long long)a0;
- (void)endRevenueInteractWithScene:(unsigned long long)a0;
- (id)previousLayout;
- (void)didUpdateRoom:(id)a0 timeStamp:(id)a1;
- (void)currentLayoutUIDidUpdateFrom:(id)a0 to:(id)a1;
- (void)didUpdatedGuestListWithActiveList:(id)a0;
- (void)didAnchorStartLive:(BOOL)a0;
- (id)currentUsersList;
- (void)leaveRadio;
- (void)enterRadio:(id)a0 fromLayout:(id)a1;
- (BOOL)isRadioLayout:(id)a0;
- (void).cxx_destruct;
- (id)currentLayout;

@end
