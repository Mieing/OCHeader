@class HTSLiveUser, HTSEventContext, NSString, IESLiveComponentContext, NSMutableArray, HTSLiveUserPreviewConfig;
@protocol IESLiveRoomService, IESLiveInternalRouter;

@interface IESLiveReportStore : NSObject <IESLiveReportRouter>

@property (nonatomic) BOOL isPreStream;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) HTSLiveUser *currentUser;
@property (retain, nonatomic) HTSLiveUserPreviewConfig *config;
@property (nonatomic) unsigned long long myRole;
@property (nonatomic) unsigned long long itsRole;
@property (nonatomic) unsigned long long reportSource;
@property (retain, nonatomic) id<IESLiveInternalRouter> internalRouter;
@property (retain, nonatomic) NSMutableArray *subscriberList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)initWithRoom:(id)a0 trackContext:(id)a1 componentContext:(id)a2;

- (void)unsubscribeEvent;
- (void)registerSubscribes;
- (void)p_showReportUserController;
- (id)initWithRoom:(id)a0 trackContext:(id)a1 componentContext:(id)a2;
- (void)showReportRoomWithConfig:(id)a0;
- (void)reportRoomWithConfig:(id)a0;
- (void)reportRoomInPreStreamWithConfig:(id)a0;
- (void)reportUserOrCommentWithConfig:(id)a0;
- (void)fullLinkReportTrackWithEventName:(id)a0 params:(id)a1;
- (void)p_showReportRoomWithConfig:(id)a0;
- (void)p_usercardParametersTransmissionWithConfig:(id)a0;
- (void)p_clickReportTrack;
- (BOOL)p_isLiveMessageReport;
- (void)p_showWebcastReportPage;
- (BOOL)p_isAnchorSource:(unsigned long long)a0;
- (BOOL)p_iAmAnchor;
- (id)p_targetRoomId;
- (id)p_reportScene:(unsigned long long)a0;
- (BOOL)p_targetIsAnchor;
- (BOOL)p_isLinkMicSource:(unsigned long long)a0;
- (BOOL)p_isOwnRoomsAnchor;
- (void)subscribeEventReportSubmit;
- (void).cxx_destruct;
- (void)dealloc;

@end
