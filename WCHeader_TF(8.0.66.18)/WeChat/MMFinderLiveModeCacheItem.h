@class NSString, MMFinderLiveModeGameSubItem, MMFinderLiveModeVideoSubItem, MMFinderLiveModeAudioSubItem;

@interface MMFinderLiveModeCacheItem : NSObject <PBCoding>

@property (retain, nonatomic) MMFinderLiveModeVideoSubItem *videoSubItem;
@property (retain, nonatomic) MMFinderLiveModeAudioSubItem *audioSubItem;
@property (retain, nonatomic) MMFinderLiveModeGameSubItem *gameSubItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_videoSubItem;
+ (void)PBArrayAdd_audioSubItem;
+ (void)PBArrayAdd_gameSubItem;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
