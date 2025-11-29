@class OMJMaterialInfo, NSArray, NSString, NSDictionary, NSMutableDictionary, MJStyleEditData, OMJMaterialManager;
@protocol MJStyleEditViewModelDataSource;

@interface MJStyleEditViewModel : NSObject <MJMaterialLoadingStatusViewModel>

@property (retain, nonatomic) MJStyleEditData *stickerData;
@property (retain, nonatomic) MJStyleEditData *fontData;
@property (retain, nonatomic) MJStyleEditData *colorData;
@property (retain, nonatomic) MJStyleEditData *animData;
@property (retain, nonatomic) NSArray *tabItems;
@property (retain, nonatomic) OMJMaterialManager *manager;
@property (nonatomic) long long entrance;
@property (nonatomic) unsigned long long segmentType;
@property (nonatomic) BOOL segmentHasMultiSubtitles;
@property (nonatomic) BOOL shouldShowTextAnimTab;
@property (retain, nonatomic) NSString *selectedMaterialID;
@property (retain, nonatomic) NSDictionary *stickerDicts;
@property (retain, nonatomic) NSDictionary *fontDicts;
@property (retain, nonatomic) NSDictionary *animDicts;
@property (readonly, nonatomic) unsigned long long type;
@property (retain, nonatomic) NSMutableDictionary *downloadStatus;
@property (retain, nonatomic) NSDictionary *backupStylesDict;
@property (weak, nonatomic) id<MJStyleEditViewModelDataSource> dataSource;
@property (nonatomic) unsigned long long selectedTabIndex;
@property (nonatomic) BOOL hasChanges;
@property (retain, nonatomic) OMJMaterialInfo *defaultTitleMaterialInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)searchFontNameWith:(id)a0 data:(id)a1;
+ (long long)searchColorStyleIDWith:(id)a0 data:(id)a1;
+ (long long)searchAnimPresetIDWith:(id)a0 data:(id)a1;

- (id)initWithMaterialManager:(id)a0 entrance:(long long)a1 segmentType:(unsigned long long)a2 segmentHasMultiSubtitles:(BOOL)a3;
- (id)segmentVM;
- (void)fetchLocalDatas:(id /* block */)a0;
- (void)fetchDatas:(id /* block */)a0;
- (void)backupStyles;
- (void)fetchBackupStyles:(id /* block */)a0;
- (void)fetchNearestSelectedDatas:(id /* block */)a0;
- (void)loadData:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)loadMaterialWithType:(unsigned long long)a0 at:(long long)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
- (void)updateColorDataIfNeededWith:(id)a0 type:(unsigned long long)a1;
- (unsigned long long)materialScene;
- (void)mj_loadMaterialWithID:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (float)mj_loadingProgressWithID:(id)a0;
- (unsigned long long)mj_loadingStatusWithID:(id)a0;
- (void)loadingStatusForID:(id)a0 threadSafetyHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
