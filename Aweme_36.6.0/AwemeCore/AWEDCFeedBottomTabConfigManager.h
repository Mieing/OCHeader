@class NSLock, NSString, AWEDCFeedBottomTabPreloadManager;

@interface AWEDCFeedBottomTabConfigManager : NSObject <AWEAppAwemeSettingMessage>

@property (nonatomic) BOOL hasLoad;
@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) AWEDCFeedBottomTabPreloadManager *currentManager;
@property (retain, nonatomic) AWEDCFeedBottomTabPreloadManager *nextManager;
@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL hasCustomTabEntry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)awemeSettingDidChange;
- (void)p_addNotifications;
- (void)p_tryUnload;
- (id)p_getNewestConfig;
- (BOOL)canShowCustomSpecialEntry;
- (BOOL)canShowDCFeedSpecialEntry;
- (void)p_tryLoad;
- (void)p_unload;
- (void)p_removeNotifications;
- (id)p_getSpecialStyleKeyWithTabID:(id)a0;
- (void)p_tryLoadNext;
- (BOOL)canShowSpecialEntry;
- (id)tryLoadSpecialEntryWithTabID:(id)a0;
- (id)getLastSpecialStyleWithTabID:(id)a0;
- (BOOL)saveLastSpecialStyle:(id)a0 tabID:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)p_load;

@end
