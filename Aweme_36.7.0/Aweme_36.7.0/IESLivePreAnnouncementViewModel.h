@class HTSLiveNewHighlightItem, HTSEventContext, IESLiveAnnouncementApi, NSDictionary, IESLiveComponentContext, NSString;
@protocol IESLiveRoomService, IESLivePreAnnouncementReaction;

@interface IESLivePreAnnouncementViewModel : NSObject <IESLiveDataSyncDelegate, HTSLiveMessageSubscriber>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) IESLiveAnnouncementApi *announcementApi;
@property (retain, nonatomic) HTSLiveNewHighlightItem *item;
@property (retain, nonatomic) HTSLiveNewHighlightItem *lastItem;
@property (nonatomic) long long appointmentCount;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (weak, nonatomic) id<IESLivePreAnnouncementReaction> reaction;
@property (copy, nonatomic) NSDictionary *dictHighlightItem;
@property (nonatomic) long long lastVerison;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)subscribedSyncDataWithValue:(id)a0 version:(long long)a1;
- (void)subscribedSyncDataUpdatedWithValue:(id)a0 oldVersion:(long long)a1 newVersion:(long long)a2;
- (void)didSetAttachingDIContext;
- (void)queryAnnouncementStatus:(id)a0 isCycle:(BOOL)a1 completion:(id /* block */)a2;
- (void)subscribePreAnnouncement:(id)a0 completion:(id /* block */)a1;
- (void)cancelSubscribePreAnnouncement:(id)a0 completion:(id /* block */)a1;
- (id)initWithRoomModel:(id)a0 trackContext:(id)a1 componentContext:(id)a2;
- (void)handleHighlightSyncData:(id)a0;
- (void)trackAnnouncementCardShow;
- (void)dragViewWithItemID:(long long)a0 sysncVesion:(long long)a1 position:(struct CGPoint { double x0; double x1; })a2 finish:(id /* block */)a3;
- (void)trackAnnouncementCardCancel;
- (void)trackAnnouncementCardClick;
- (void)trackAnnouncementCardClickSuccess;
- (void)trackAnnouncementCardCloseAlertShow;
- (void)trackAnnouncementCardCloseAlertClick:(id)a0;
- (void)handleHighlightChangeSyncData:(id)a0;
- (void)fetchHighlightItem:(id)a0;
- (void)sendPositionWithRoomID:(id)a0 itemID:(long long)a1 syncVesion:(long long)a2 position:(struct CGPoint { double x0; double x1; })a3 completion:(id /* block */)a4;
- (void)trackAnnouncementCardEvent:(id)a0 params:(id)a1;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
