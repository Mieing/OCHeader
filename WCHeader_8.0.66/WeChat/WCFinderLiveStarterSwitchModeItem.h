@class NSMutableDictionary, WCFinderLiveStarterLiveModeCacheItem, NSLock, WCFinderLiveStarterLiveModeSubItem;

@interface WCFinderLiveStarterSwitchModeItem : NSObject

@property (retain, nonatomic) NSLock *liveModeLock;
@property (retain, nonatomic) NSMutableDictionary *liveModeDic;
@property (retain, nonatomic) WCFinderLiveStarterLiveModeCacheItem *cacheItem;
@property (nonatomic) BOOL needHideAudioLiveMode;
@property (nonatomic) BOOL needHideKTVLiveMode;
@property (nonatomic) unsigned long long liveMode;
@property (retain, nonatomic) WCFinderLiveStarterLiveModeSubItem *selectSubItem;
@property (retain, nonatomic) WCFinderLiveStarterLiveModeSubItem *lastSubItem;

+ (id)cleanLiveStarterGameCacheItem;
+ (id)getLiveStarterCacheItem;

- (void)setUpLiveModeDicWithLiveModeCacheItem:(id)a0 needHideAudioLiveMode:(BOOL)a1 needHideKTVLiveMode:(BOOL)a2;
- (BOOL)isRecordSelectedLiveMode:(unsigned long long)a0;
- (id)getSelectSubItemWithLiveMode:(unsigned long long)a0;
- (BOOL)isRecordSelectedVideoMode:(id)a0;
- (BOOL)isRecordSelectedAudioMode:(id)a0;
- (BOOL)isRecordSelectedGameMode:(id)a0;
- (BOOL)selectModeWithLiveModeSubItem:(id)a0;
- (BOOL)deleteModeWithLiveMode:(unsigned long long)a0;
- (BOOL)changeVideoLandscapModeToPortraitMode;
- (id)getDirectSwitchSubItem:(id)a0 didConsumeRedDot:(BOOL)a1;
- (void)cacheLiveStarterLiveModeSubItem:(unsigned long long)a0;
- (void)cleanCurrentLiveStarterGameCacheItem;
- (id)getLiveModeDicWithCacheItem:(id)a0;
- (id)updateLiveModeDicWithDic:(id)a0 needHideAudioLiveMode:(BOOL)a1 needHideKTVLiveMode:(BOOL)a2;
- (id)changeLanguageWithItem:(id)a0 liveMode:(unsigned long long)a1 videoSubType:(unsigned long long)a2 audioSubType:(unsigned long long)a3;
- (void).cxx_destruct;

@end
