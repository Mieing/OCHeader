@class NSString;

@interface WAUtilityProxy : NSObject <IWAUtilityService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)valueFromDynamicConfigForKey:(id)a0;
+ (unsigned int)uintFromDynamicConfigForKey:(id)a0 defaultValue:(unsigned int)a1;
+ (id)valueForKey:(id)a0 config:(id)a1;
+ (BOOL)isOverSeaUserAndOpenForbiddenSwitch;
+ (unsigned int)appDidFinishLaunchTimeStampInSecond;
+ (id)getAppServiceConfigResPath;
+ (void)updateUserAgentIfNeeded;
+ (BOOL)useCustomNavigationBar;
+ (id)extendScriptModelToInjectWithWAContact:(id)a0;
+ (id)userAgentForWeApp;
+ (id)extendBytesModelArrary;
+ (id)fetchImageScrollViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (Class)fetchImageScrollViewClass;
+ (id)createImageWithSvgData:(id)a0 resize:(struct CGSize { double x0; double x1; })a1 scale:(double)a2;
+ (BOOL)isWeworkAppInstalled;
+ (BOOL)isElderModeOn;
+ (BOOL)isSpecialRenderModeOn;
+ (id)wechatUUID;
+ (void)sendDebugFileToFileHelper:(id)a0;
+ (id)flutterRevision;
+ (unsigned long long)getChatTypeWithChatUsername:(id)a0;
+ (id)createNativeViewWithName:(id)a0;
+ (BOOL)isNativeViewUseTexture:(id)a0;
+ (id)cameraWithPosition:(long long)a0 deviceType:(id)a1 needFallBackDevice:(BOOL)a2;
+ (id)getCameraZoomFactorInfo;
+ (BOOL)enableScanAutoSwitchCameraWhenFocusing;
+ (double)autoSwitchingCameraLensPosition;
+ (void)notifyChatBotVoipNotifyToStopWeAppProcess:(BOOL)a0;


@end
