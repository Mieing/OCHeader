@class HTSEventContext, NSString, HTSLiveTitleIcon;
@protocol IESLiveRoomService;

@interface IESLiveMediaTitleStore : NSObject <HTSLiveMessageSubscriber>

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) NSString *roomTitle;
@property (retain, nonatomic) NSString *introduceStr;
@property (nonatomic) BOOL isShowIntroduce;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) HTSLiveTitleIcon *titleIcon;
@property (readonly, nonatomic) BOOL isVSRoom;
@property (readonly, nonatomic) NSString *currentPeriod;
@property (readonly, nonatomic) NSString *tipsToast;
@property (readonly, nonatomic) long long titleTag;
@property (nonatomic) BOOL introduceAnimating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentOrientationChanged:(long long)a0;
- (void)didSetAttachingDIContext;
- (id)initWithRoom:(id)a0 trackContext:(id)a1;
- (void)updateWithRoomModel:(id)a0;
- (void)onCameraDidChangeTo:(id)a0 source:(long long)a1;
- (void)hideIntroduce;
- (void)showIntroduce;
- (BOOL)showLandscapeRoomTitleInPlayerControl;
- (BOOL)showPortraitRoomTitleInPlayerControl;
- (id)currentCameraTitle;
- (void)trackTitleClick;
- (void)didClickRoomTitle;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;
- (int)uiType;

@end
