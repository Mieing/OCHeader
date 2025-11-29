@class WCFinderLiveStarterLiveModeAudioSubItem, NSString, WCFinderLiveStarterLiveModeVideoSubItem, WCFinderLiveStarterLiveModeSubItem, WCFinderLiveStarterLiveModeGameSubItem;

@interface WCFinderLiveStarterLiveModeCacheItem : NSObject <PBCoding>

@property (nonatomic) unsigned long long lastSimpleVersionType;
@property (nonatomic) unsigned long long liveMode;
@property (retain, nonatomic) WCFinderLiveStarterLiveModeVideoSubItem *videoSubItem;
@property (retain, nonatomic) WCFinderLiveStarterLiveModeAudioSubItem *audioSubItem;
@property (retain, nonatomic) WCFinderLiveStarterLiveModeGameSubItem *gameSubItem;
@property (retain, nonatomic) WCFinderLiveStarterLiveModeSubItem *ktvSubItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_liveMode;
+ (void)PBArrayAdd_videoSubItem;
+ (void)PBArrayAdd_audioSubItem;
+ (void)PBArrayAdd_gameSubItem;
+ (void)PBArrayAdd_ktvSubItem;
+ (void)PBArrayAdd_lastSimpleVersionType;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
