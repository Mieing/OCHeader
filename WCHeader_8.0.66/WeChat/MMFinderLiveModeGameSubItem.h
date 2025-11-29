@class NSString, MMFinderLiveGameUserInfo;

@interface MMFinderLiveModeGameSubItem : MMFinderLiveModeItem <PBCoding>

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
+ (void)PBArrayAdd_appId;
+ (void)PBArrayAdd_gameEntryScene;
+ (void)PBArrayAdd_gameUserInfo;
+ (void)initialize;
+ (id)getGameSubModeItems;
+ (id)getGameSubModeItemWithAppId:(id)a0 gameEntryScene:(long long)a1;

- (id)getPBPropertyTable;
- (BOOL)isSwitchValid;
- (void).cxx_destruct;

@end
