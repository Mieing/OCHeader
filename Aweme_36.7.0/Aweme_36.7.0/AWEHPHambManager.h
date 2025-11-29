@class AWEHPHambCache, NSString, AWEHPHambSettingsManager, AWEHPHambMessageManager, AWEHPHambListenerManager, NSLock, AWEHPHambCheckerManager;

@interface AWEHPHambManager : NSObject <AWEUserMessage>

@property (retain, nonatomic) NSLock *lock;
@property (copy, nonatomic) NSString *currentUserID;
@property (readonly, nonatomic) AWEHPHambSettingsManager *settingsManager;
@property (readonly, nonatomic) AWEHPHambMessageManager *messageManager;
@property (readonly, nonatomic) AWEHPHambListenerManager *listenerManager;
@property (readonly, nonatomic) AWEHPHambCheckerManager *checkerManager;
@property (readonly, nonatomic) AWEHPHambCache *map;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)p_reload;
- (void)p_insertMessages:(id)a0 error:(id *)a1;
- (void)p_safeTryReload;
- (id)getSettingsDataHash;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setup;

@end
