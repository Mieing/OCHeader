@class HTSEventContext, NSArray, NSString;
@protocol IESLiveRoomService;

@interface IESLiveMediaAvatarStore : NSObject <IESLiveUserActions>

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (nonatomic) BOOL followRequesting;
@property (readonly, nonatomic) NSArray *avatarURLArray;
@property (readonly, nonatomic) NSString *avatarBGColor;
@property (readonly, nonatomic) BOOL canShowFansClub;
@property (readonly, nonatomic) BOOL hasAuthenticationBadge;
@property (readonly, nonatomic) NSArray *badgeURLArray;
@property (readonly, nonatomic) NSString *badgeBGColor;
@property (readonly, nonatomic) NSString *nickNameDisplayText;
@property (nonatomic) BOOL isFollow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFollowUser:(id)a0 secUserID:(id)a1 status:(long long)a2;
- (void)didUnfollowUser:(id)a0 secUserID:(id)a1 status:(long long)a2;
- (id)initWithRoom:(id)a0 trackContext:(id)a1;
- (void)trackAfterLiveFollowWithUserID:(id)a0 extraParams:(id)a1 completion:(id /* block */)a2;
- (void)registerLiveFollowStatusChangedSignal;
- (void)initFollowBtnStatus;
- (id)buildFollowEvent;
- (void)followAnchor;
- (void)trackFansClubClick;
- (void)trackFansButtonShow;
- (void).cxx_destruct;
- (void)addObserver;
- (void)dealloc;

@end
