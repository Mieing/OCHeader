@class AWEIMFriendWidgetGuideResource, NSString, NSDictionary, BDXBridgeEventSubscriber, AWEIMWidgetInfoResponseModel, AWEIMStreakPetElfWidgetGuideImageView;

@interface AWEIMStreakPetElfWidgetPopupGuideComponent : AWEIMComponentBase <AWEUGDesktopChannelGuideMessage, AWEUGDesktopChannelGuideInfoInjectProtocol, AWEUGSceneDesktopChannelGuideEvadeProtocol, AWEUserMessage>

@property (copy, nonatomic) NSDictionary *extra;
@property (retain, nonatomic) AWEIMFriendWidgetGuideResource *resource;
@property (retain, nonatomic) AWEIMWidgetInfoResponseModel *widgetInfo;
@property (retain, nonatomic) BDXBridgeEventSubscriber *requestStreakElfWidgetInstallEventSubscriber;
@property (retain, nonatomic) NSString *frontEnterFrom;
@property (weak, nonatomic) AWEIMStreakPetElfWidgetGuideImageView *guideImageView;
@property (nonatomic) BOOL isInFetchIMWidgetInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (BOOL)shouldDesktopChannelGuideEvadeWithScene:(id)a0 enterFrom:(id)a1;
- (void)desktopChannelGuideAlreadyShowWithScene:(id)a0 enterFrom:(id)a1 guideType:(id)a2 extraParams:(id)a3 config:(id)a4;
- (void)desktopChannelGuideShowFailedWithScene:(id)a0 enterFrom:(id)a1 guideType:(id)a2 error:(id)a3 extraParams:(id)a4;
- (void)desktopChannelGuideClickWithScene:(id)a0 enterFrom:(id)a1 guideType:(id)a2 clickTarget:(id)a3;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)hostVC_afterFirstRender;
- (id)contentGuideImage:(id)a0;
- (void)setupRequestStreakElfWidgetInstallEventHandler;
- (void)getWidgetInfoWithStreakWidgetImageType:(id)a0 completion:(id /* block */)a1;
- (BOOL)isCurrentSceneWithName:(id)a0 enterFrom:(id)a1;
- (id)p_getTrackParams;
- (void).cxx_destruct;
- (id)init;
- (void)resetData;
- (void)dealloc;
- (id)sceneType;

@end
