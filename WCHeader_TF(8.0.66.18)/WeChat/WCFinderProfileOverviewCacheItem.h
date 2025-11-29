@class NSData, NSString, WCFinderProfileOverviewMusicCache, NSArray, WCFinderProfileAudioSectionCache, WCFinderProfileShopSectionCache, NSMutableArray, FinderCollectionListInfo, FinderLiteAppParam, WCFinderProfileMemberShipCache;

@interface WCFinderProfileOverviewCacheItem : NSObject <PBCoding>

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) id parsedObj;
@property (retain, nonatomic) NSArray *layouts;
@property (retain, nonatomic) NSArray *sectionInfoList;
@property (retain, nonatomic) NSMutableArray *showAllButtonSections;
@property (retain, nonatomic) NSArray *feedTids;
@property (nonatomic) unsigned long long collectionCount;
@property (retain, nonatomic) FinderCollectionListInfo *collectionInfo;
@property (nonatomic) unsigned long long liveFeedCount;
@property (retain, nonatomic) NSArray *liveFeedTids;
@property (nonatomic) unsigned long long templateCnt;
@property (retain, nonatomic) NSArray *templateInfos;
@property (retain, nonatomic) WCFinderProfileOverviewMusicCache *musicCache;
@property (retain, nonatomic) WCFinderProfileAudioSectionCache *audioCache;
@property (nonatomic) unsigned long long newlifeCnt;
@property (retain, nonatomic) NSArray *newlifeFeedIds;
@property (retain, nonatomic) WCFinderProfileMemberShipCache *memberShip;
@property (nonatomic) unsigned long long qaCount;
@property (retain, nonatomic) FinderLiteAppParam *qaLiteApp;
@property (nonatomic) unsigned long long paidCollectionCount;
@property (retain, nonatomic) NSArray *paidCollectionList;
@property (retain, nonatomic) WCFinderProfileShopSectionCache *shopCache;
@property (nonatomic) unsigned long long nativeDramaCount;
@property (copy, nonatomic) NSArray *nativeDramaInfos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_layouts;
+ (void)PBArrayAdd_feedTids;
+ (void)PBArrayAdd_collectionCount;
+ (void)PBArrayAdd_collectionInfo;
+ (void)PBArrayAdd_liveFeedCount;
+ (void)PBArrayAdd_liveFeedTids;
+ (void)PBArrayAdd_templateCnt;
+ (void)PBArrayAdd_templateInfos;
+ (void)PBArrayAdd_musicCache;
+ (void)PBArrayAdd_audioCache;
+ (void)PBArrayAdd_newlifeCnt;
+ (void)PBArrayAdd_newlifeFeedIds;
+ (void)PBArrayAdd_memberShip;
+ (void)PBArrayAdd_qaCount;
+ (void)PBArrayAdd_showAllButtonSections;
+ (void)PBArrayAdd_paidCollectionCount;
+ (void)PBArrayAdd_paidCollectionList;
+ (void)PBArrayAdd_sectionInfoList;
+ (void)PBArrayAdd_shopCache;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
