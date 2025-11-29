@class RTVUserProfileManager, NSString;
@protocol RxInjector;

@interface RTVVoipTrackerHelper : NSObject <RTVVoipTrackerHelperInterface>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) RTVUserProfileManager *userProfileManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)topViewControllerForController:(id)a0;

- (void)rxAwakeFromPropertyInjection;
- (id)currentSceneType;
- (id)enterFromStrWithEnterFrom:(unsigned long long)a0;
- (id)extraTrackInfoWithFeedEnterFrom:(unsigned long long)a0;
- (id)currentPageTypeString;
- (id)enterFromV2StrWithEnterFrom:(unsigned long long)a0;
- (id)enterMethodStrWithEnterFrom:(unsigned long long)a0;
- (id)previousPageEnterMethodWithEnterFrom:(unsigned long long)a0;
- (id)clickFromStrWithEnterFrom:(unsigned long long)a0;
- (id)conversationIDWithUserID:(id)a0;
- (id)isTimeoutWithVoipModel:(id)a0;
- (id)cameraPositionWithIsFrontCam:(BOOL)a0;
- (id)declineSceneType;
- (id)currentSceneInfo;
- (id)sceneTypeForTracker;
- (id)beautyPanelClickEventName;
- (id)videoCallClickEffectEventName;
- (id)currentPageTypeStringV2;
- (BOOL)isFromChatPanelPlayGame:(unsigned long long)a0;
- (id)__topViewControllerForApplicationWindow;
- (void).cxx_destruct;

@end
