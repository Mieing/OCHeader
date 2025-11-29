@class NSString;

@interface AWETimonCustomStateRegistry : NSObject <AWEPasteboardCanAutoreadMessage, AWEDigitalWellbeingMessage, AWEBasicModeMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerCustomParams;
+ (Class)aAWEPrivacyExternServiceClass;
+ (id)__pageNameForControllerName:(id)a0;
+ (void)registerExtraParamsFromAdapter;
+ (void)_registerCurrentPage;
+ (void)_registerIsInSplash;
+ (void)_registerAutoReadPasteboard;
+ (void)listenPrivacyPolicyAgree;
+ (void)_registerContentDetectService;
+ (void)_registAlbumEXIFInfo;
+ (void)privacyPolicyAgreeDidChange:(id)a0;
+ (void)topViewControllerChange:(id)a0;
+ (id)sharedInstance;

- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (void)basicModeDidChange:(BOOL)a0;
- (id)aAWEPrivacyExternService;
- (void)pasteboardCanAutoreadDidChange:(BOOL)a0;
- (id)init;
- (void)dealloc;

@end
