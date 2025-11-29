@class NSString, NSArray, NSNumber;
@protocol ACCPublishRepository;

@interface AWERepoFilterModel : NSObject <ACCRepoDataDiff, ACCRepositoryCompareProtocol, AWERepositoryDraftProtocol, NSCopying, ACCRepositoryContextDeprecated, ACCRepoFilterData, ACCRepoRegister>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *editFilterIdList;
@property (copy, nonatomic) NSArray *editFilterPinyinNameList;
@property (copy, nonatomic) NSArray *editFilterIdAndIntensityList;
@property (copy, nonatomic) NSString *colorFilterId;
@property (copy, nonatomic) NSString *colorFilterName;
@property (copy, nonatomic) NSNumber *colorFilterIntensityRatio;
@property (nonatomic) BOOL capturedWithLightningFilter;
@property (nonatomic) BOOL editedWithLightningFilter;
@property (nonatomic) BOOL hasDeselectionBeenMadeRecently;
@property (nonatomic) BOOL enableURS;
@property (nonatomic) BOOL isCacheClearedEnter;
@property (copy, nonatomic) NSArray *filterIdsForDownload;
@property (copy, nonatomic) NSArray *adjustIdsForDownload;
@property (copy, nonatomic) NSString *autoApplyFilterId;
@property (weak, nonatomic) id<ACCPublishRepository> repoDeprecated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasAppliedFilter;

+ (id)repo_dataProtocol;

- (id)filterIds;
- (id)acc_publishRequestParams:(id)a0;
- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (id)editDiffs;
- (id)customEidtStatusCompareParams:(id)a0 scene:(long long)a1;
- (id)currentFilterIdsWithMegaEditor:(id)a0;
- (id)filterInfoDictionary;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
