@class HTSLiveUser_FansClub, HTSEventContext, NSString, IESLiveComponentContext, FansclubMeResult_Data, NSMutableArray;
@protocol IESLiveRoomService, IESLiveSubscription, IESLiveUserRightsAPI;

@interface IESLiveVSFansClubStore : NSObject <IESHYControllerDelegate, HTSLiveMessageSubscriber, IESLiveVSFansGroupRouter>

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (nonatomic) BOOL roomDataReady;
@property (retain, nonatomic) NSString *fansClubUrl;
@property (nonatomic) BOOL isFans;
@property (nonatomic) BOOL isAnchor;
@property (retain, nonatomic) HTSLiveUser_FansClub *userFansClubInfo;
@property (retain, nonatomic) FansclubMeResult_Data *fansClubEntryInfo;
@property (nonatomic) int userFansClubStatus;
@property (retain, nonatomic) id<IESLiveSubscription> disposable;
@property (retain, nonatomic) NSMutableArray *completions;
@property (retain, nonatomic) id<IESLiveUserRightsAPI> fansClubApi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentCreate;
- (void)didSetAttachingDIContext;
- (BOOL)isFansOfRoom;
- (void)requestFansClubEntryInfoWithSource:(unsigned long long)a0;
- (void)openFansGroupViewWithTrackType:(unsigned long long)a0 sourceType:(unsigned long long)a1;
- (void)openFansGroupViewWithTrackType:(unsigned long long)a0 sourceType:(unsigned long long)a1 isSubscribeTab:(BOOL)a2;
- (void)openFansGroupViewWithTrackType:(unsigned long long)a0;
- (void)openFansGroupViewWithMessage:(id)a0 TrackType:(unsigned long long)a1;
- (BOOL)isShowGiftPanelFansClubBar;
- (id)currentFansclubEntryInfo;
- (void)currentFansclubEntryInfo:(id /* block */)a0;
- (id)currentGuardInfo;
- (BOOL)enableFansclubGiftPanelIncentiveGuide;
- (void)openEcomFansGroupView;
- (int)fansClubStatus;
- (void)vs_openFansGroupViewWithTrackType:(unsigned long long)a0;
- (void)iesHYController:(id)a0 didFinishLoadWithError:(id)a1;
- (void)bindService;
- (void)p_enterLiveRoom;
- (id)initWithRoomModel:(id)a0 trackContext:(id)a1 componentContext:(id)a2;
- (void)subscribeBackendData;
- (id)transFormHomePageDataToMeData:(id)a0;
- (void)dealFansClubData:(id)a0 source:(unsigned long long)a1 success:(BOOL)a2;
- (void)requestFansClubHomePageWithRequestSource:(unsigned long long)a0;
- (void)openFansGroupViewWithMessage:(id)a0 trackType:(unsigned long long)a1 sourceType:(unsigned long long)a2 isSubscribeTab:(BOOL)a3;
- (void)requestUserFansClubInfo;
- (void)addDouPlusTrackExtraInfoWithTrackInfo:(id)a0;
- (void)addEffectAdTrackExtraInfoWithTrackInfo:(id)a0;
- (id)p_lynxPageUrlForMessage:(id)a0 isSubscribe:(BOOL)a1;
- (id)p_fansGroupFinalUrlWithStr:(id)a0;
- (void)requestFansClubEntryInfoRequestSource:(unsigned long long)a0;
- (id)p_webPageUrlForMessage:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)messageReceived:(id)a0;

@end
