@class NSDictionary, BDXBridgeEventSubscriber, NSString;
@protocol IESLiveCustomConfig, HTSLiveLongPressActions, IESLiveRoomService, IESLiveLongPressActions;

@interface IESLiveLongPressActionImpl : NSObject <IESLiveLongPressViewModelReation>

@property (copy, nonatomic) NSDictionary *trackContext;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) id<IESLiveCustomConfig> customConfig;
@property (retain, nonatomic) BDXBridgeEventSubscriber *reportSubscribe;
@property (nonatomic) double lastClickTime;
@property (weak, nonatomic) id<IESLiveLongPressActions> longPressActionCreator;
@property (weak, nonatomic) id<HTSLiveLongPressActions> userActionCreator;
@property (nonatomic) BOOL inRoom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)logExtra;
- (void)didSetAttachingDIContext;
- (id)adID;
- (void)followUser:(id)a0 trackParams:(id)a1 completion:(id /* block */)a2;
- (id)adExtra;
- (id)initWithRoom:(id)a0 trackContext:(id)a1;
- (void)addSubscribeReportSubmitEvent;
- (void)hidePanelView;
- (void)performRecommendGuideWithCompletion:(id /* block */)a0 hasRecommend:(BOOL)a1;
- (void)performReportDislikeActionWithMultiReason:(id)a0;
- (void)performReportAction;
- (void)performDouPlusAction:(id)a0;
- (void)p_showReportUserController;
- (void)changeFollowStatus:(BOOL)a0;
- (void)showSettingPanel;
- (void)openNotificationPanelFromPreAnnouncement:(BOOL)a0 appointmentBlock:(id /* block */)a1 cancelBlock:(id /* block */)a2;
- (void)performAudioReportAction;
- (void)performAdDislikeAction:(id)a0;
- (void)dispatchDislikeActionIfNeeds;
- (void)deleteCurrentRoomIfNeeds;
- (void)showLongPressNotificationView:(long long)a0;
- (void)performDislikeAction:(long long)a0 dislikeParams:(id)a1;
- (void)trackerDislikeSortClickWithType:(long long)a0;
- (void)dislikeToastWithReason:(long long)a0;
- (id)trackerDislikeType:(long long)a0;
- (BOOL)isHeadSetPlugging;
- (float)getSystemVolume;
- (void)openNotificationPanel;
- (void)performDislikeAction:(long long)a0;
- (void)openOptimizeRecommendWithURL:(id)a0 roomModel:(id)a1 drawOrder:(id)a2;
- (void)trackerFeedbackEntranceClickWithVideoID:(id)a0 roomModel:(id)a1 requestPage:(id)a2 eventPage:(id)a3 redDotShow:(BOOL)a4;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isAd;
- (id)creativeID;

@end
