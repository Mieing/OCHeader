@class AWEProfileExtensionAreaCardModel, NSString, UIImageView, NSDictionary, BDXBridgeEventSubscriber, AWEUserModel;
@protocol AWEProfileExtensionAreaCardViewProtocol, HTSKVStore;

@interface AWELiveMomentUserProfileExtensionController_New : NSObject <AWEProfileExtensionAreaCardControllerProtocol>

@property (retain, nonatomic) AWEUserModel *userModel;
@property (retain, nonatomic) AWEProfileExtensionAreaCardModel *cardModel;
@property (retain, nonatomic) id<AWEProfileExtensionAreaCardViewProtocol> cardView;
@property (nonatomic) unsigned long long cardIndex;
@property (nonatomic) BOOL isClick;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) id<HTSKVStore> kvStore;
@property (copy, nonatomic) NSDictionary *extraInfoDict;
@property (retain, nonatomic) NSDictionary *liveAnnounceInfoDict;
@property (nonatomic) BOOL isSubscribed;
@property (nonatomic) BOOL isCurrentUser;
@property (retain, nonatomic) BDXBridgeEventSubscriber *makeSubscriber;
@property (retain, nonatomic) BDXBridgeEventSubscriber *dynamicPageShowSubscriber;
@property (nonatomic) double lastClickTimeStamp;
@property (retain, nonatomic) BDXBridgeEventSubscriber *liveNotificationSubscriber;
@property (nonatomic) BOOL watchExpressStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardControllerWithCommonParam:(id)a0;
+ (void)handleProfileExtensionAreaActionWithType:(unsigned long long)a0 userModel:(id)a1 schema:(id)a2 extraInfoDict:(id)a3;

- (void)passCardView:(id)a0;
- (void)cardDidClicked;
- (void)cardWillAppear;
- (void)updateRedDot;
- (void)handleLiveAppointment:(id)a0;
- (void)trackEntranceShow;
- (BOOL)canShowLiveAppointmentInExtensionArea;
- (void)trackLiveAppointmentCardDidShowEvent;
- (void)trackLiveDynamicPageShowWithParams:(id)a0;
- (void)openLiveDynamicPage:(id)a0 queryBuilder:(id /* block */)a1;
- (BOOL)watchExpressExposed;
- (BOOL)announcementPreviewExposed;
- (void)trackLiveAppointmentCardDidClickEvent;
- (void)changeSubscribeStatusAndShowToast;
- (void)trackLiveAppointmentCardDidClickSuccessEvent;
- (void)commomTrackLiveAppointmentCardParams:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
