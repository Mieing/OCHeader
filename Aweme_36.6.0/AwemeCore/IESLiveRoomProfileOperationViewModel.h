@class HTSEventContext, NSString, IESLiveRoomProfileStore, IESLiveComponentContext;
@protocol IESLiveRoomService, HTSLiveRoomProfileReaction;

@interface IESLiveRoomProfileOperationViewModel : NSObject <IESLiveUserActions>

@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (weak, nonatomic) IESLiveRoomProfileStore *store;
@property (nonatomic) BOOL isAnchor;
@property (retain, nonatomic) id<HTSLiveRoomProfileReaction> profileReactionCreator;
@property (nonatomic) long long animationCallTimes;
@property (nonatomic) BOOL needUpdateViewConstraints;
@property (nonatomic) BOOL clickProfileFollowBtn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)operationViewModelWithStore:(id)a0 room:(id)a1 trackContext:(id)a2 componentContext:(id)a3;

- (void)didSetAttachingDIContext;
- (BOOL)isVSRoom;
- (BOOL)isFollowed;
- (BOOL)needShowFollowButton;
- (void)registerLiveFollowStatusChangedSignal;
- (id)currentOwner;
- (id)revenueButtonView;
- (struct CGSize { double x0; double x1; })followButtonSize;
- (void)didClickOperationButtonWithBeforeAction:(id /* block */)a0 complete:(id /* block */)a1;
- (void)followUser:(id)a0 secUserId:(id)a1 beforeFollow:(id /* block */)a2 completion:(id /* block */)a3;
- (id)buildFollowEvent:(id)a0 requestPage:(id)a1 inBottom:(BOOL)a2;
- (void)didUpdateFollowStatus:(id)a0 secUserID:(id)a1 status:(long long)a2;
- (void)didClickFollowButtonWithBeforeAction:(id /* block */)a0 complete:(id /* block */)a1;
- (long long)currentFollowStatus;
- (void).cxx_destruct;
- (void)dealloc;
- (id)currentRoom;
- (id)currentUserID;

@end
