@class NSString, MMFinderLiveGameUserInfo;

@interface WCFinderLiveStarterLiveModeGameSubItem : WCFinderLiveStarterLiveModeSubItem <PBCoding>

@property (retain, nonatomic) NSString *appId;
@property (nonatomic) long long gameEntryScene;
@property (retain, nonatomic) MMFinderLiveGameUserInfo *gameUserInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_liveMode;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_subTitle;
+ (void)PBArrayAdd_subDetail;
+ (void)PBArrayAdd_appId;
+ (void)PBArrayAdd_gameEntryScene;
+ (void)PBArrayAdd_gameUserInfo;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
