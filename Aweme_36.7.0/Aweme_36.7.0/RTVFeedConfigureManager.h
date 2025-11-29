@class NSString;
@protocol RTVSettingsManager, RxInjector, RTVXRControllerInjector;

@interface RTVFeedConfigureManager : NSObject <RTVXRControllerInterface, RTVFeedConfigureManagerInterface>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, nonatomic) id<RTVSettingsManager> settingManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)rtv_awakeFromControllerInjector;
- (BOOL)preloadPlayerEnable;
- (id)roomSettings;
- (long long)localFeedShareRoomFeature;
- (BOOL)isSupportFeedShareViewerCastVideo;
- (BOOL)isSupportShareOwnerSwitchVideoStream;
- (BOOL)isSupportShareOthersVideo;
- (BOOL)shouldShowCastVideoButtonForShareOwnerWithOldVersion;
- (void).cxx_destruct;

@end
