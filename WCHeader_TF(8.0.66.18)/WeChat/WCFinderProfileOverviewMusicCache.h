@class NSArray, MMListenCategoryItem, NSString;

@interface WCFinderProfileOverviewMusicCache : NSObject <PBCoding>

@property (retain, nonatomic) NSArray *playList;
@property (retain, nonatomic) MMListenCategoryItem *musicCategory;
@property (retain, nonatomic) NSArray *musicList;
@property (nonatomic) long long musicCnt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_playList;
+ (void)PBArrayAdd_musicCategory;
+ (void)PBArrayAdd_musicList;
+ (void)PBArrayAdd_musicCnt;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
