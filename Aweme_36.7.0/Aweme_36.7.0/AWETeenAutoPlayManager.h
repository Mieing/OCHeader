@class AWETeenAutoPlayGuidePopoverManager, NSString;

@interface AWETeenAutoPlayManager : NSObject <AWEUserMessage, AWEDigitalWellbeingMessage>

@property (nonatomic) BOOL currentAutoPlayState;
@property (retain, nonatomic) AWETeenAutoPlayGuidePopoverManager *guidePopoverManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isTeenAutoPlayEnable;
+ (id)getAutoPlayConfig;
+ (BOOL)isSceneInAutoPlayWhiteList:(long long)a0;
+ (BOOL)isAutoPlayFloatButtonEnableWithVCType:(long long)a0;
+ (id)sharedManager;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (void)p_registerMessage;
- (void)dismissPopoverIfNeeded;
- (void)updateTeenAutoPlayState:(BOOL)a0;
- (void)tryToShowAutoPlayGuidePopoverWithTarget:(id)a0;
- (void)p_initAutoPlayState;
- (id)createAutoPlayFloatButton;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
