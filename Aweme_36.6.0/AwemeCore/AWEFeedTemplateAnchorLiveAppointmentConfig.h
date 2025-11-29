@class BDXBridgeEventSubscriber, NSString;

@interface AWEFeedTemplateAnchorLiveAppointmentConfig : AWEFeedTemplateAnchorBaseConfig <IESHYControllerDelegate>

@property (retain, nonatomic) BDXBridgeEventSubscriber *xBridgeSubscriber;
@property (nonatomic) BOOL hasReservation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowAnchor:(id)a0;

- (id)extraParams;
- (void)anchorViewWillShowOnSuperview;
- (void)handlerTemplateAnchorViewClicked;
- (id)trackerCommonParamsForTemplateAnchor;
- (void)updateWithAwemeModel:(id)a0 needPerformOnDisplay:(BOOL)a1;
- (id)p_enterFrom;
- (id)p_enterMethod;
- (id)p_trackParams;
- (void)setupXBridge;
- (void)p_updateViewWithModel:(id)a0;
- (void)p_jumpToLiveRoomWithRoomID:(id)a0;
- (void)p_jumpToAppointmentWithExtraModel:(id)a0;
- (id)p_liveModuleService;
- (void)p_updateReservationStatus:(BOOL)a0;
- (void)p_changeReservationModelWithStatus:(BOOL)a0;
- (void)p_updateCalendarWithStatus:(BOOL)a0 appointmentID:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
