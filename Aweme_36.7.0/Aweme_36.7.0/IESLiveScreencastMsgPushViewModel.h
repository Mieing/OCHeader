@class IESLiveScreencastMsgPushApi, NSString, HTSLiveUser;
@protocol IESLiveRoomService;

@interface IESLiveScreencastMsgPushViewModel : NSObject

@property (retain, nonatomic) IESLiveScreencastMsgPushApi *api;
@property (retain, nonatomic) HTSLiveUser *currentUser;
@property (nonatomic) long long floatingHeight;
@property (nonatomic) BOOL msgPushComponentOpt;
@property (nonatomic) BOOL msgPushGiftMessageOpt;
@property (nonatomic) BOOL isCommentMsgPush;
@property (nonatomic) BOOL isGiftMsgPush;
@property (nonatomic) BOOL isSystemMsgPush;
@property (nonatomic) BOOL isUserEnterMsgPush;
@property (nonatomic) BOOL shouldShowPushView;
@property (nonatomic) BOOL shouldShowUnselectModeAlertView;
@property (copy, nonatomic) NSString *toastString;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (nonatomic) long long currentMode;
@property (nonatomic) BOOL autoScrollToBottom;
@property (nonatomic) BOOL didEndDragging;

- (void)didSetAttachingDIContext;
- (id)initWithRoomModel:(id)a0;
- (BOOL)liveAnchorInteractMsgFloatingStyleEnable;
- (BOOL)liveAnchorMsgPushComponentOpt;
- (void)setAllSettingStatus:(BOOL)a0;
- (long long)liveAnchorInteractMsgFloatingStyleHeight;
- (void)updateAnchorCommentPushConfig;
- (BOOL)liveScreencastMsgPushGiftMessageOpt;
- (id)requestPushNotificationPermission;
- (void)sendConfigRequestExplicitWithSettingType:(long long)a0 isOn:(id)a1;
- (void)sendConfigRequestWithSettingType:(long long)a0 isOn:(id)a1;
- (void)updateSettingTypeByGet:(id)a0;
- (void)updateSettingType:(long long)a0 status:(BOOL)a1;
- (void)updateSettingTypeBySet:(id)a0 error:(id)a1;
- (void).cxx_destruct;

@end
