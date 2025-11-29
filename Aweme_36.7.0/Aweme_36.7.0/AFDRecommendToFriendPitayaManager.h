@class NSMutableDictionary, NSString, NSLock, NSObject;
@protocol OS_dispatch_queue;

@interface AFDRecommendToFriendPitayaManager : NSObject <AWEUserMessage, AWEBasicModeMessage, AWEDigitalWellbeingMessage, AFDRecommendToFriendPitayaManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *recentAwemes;
@property (retain, nonatomic) NSLock *recentAwemesLock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *recentAwemesWriteQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (void)basicModeDidChange:(BOOL)a0;
- (void)updateRecentAweme:(id)a0 referString:(id)a1;
- (void)p_addNotifications;
- (BOOL)pitayaEntranceLabelEnabled;
- (id)handleEntranceLabelRequestActionMessage:(id)a0;
- (id)handleEntranceLabelResultActionMessage:(id)a0;
- (void)p_writeRecentAweme:(id)a0 referString:(id)a1;
- (BOOL)p_checkEnableShow:(id)a0;
- (void)p_cleanRecentAwemes;
- (id)debug_getRecentAwemes;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
