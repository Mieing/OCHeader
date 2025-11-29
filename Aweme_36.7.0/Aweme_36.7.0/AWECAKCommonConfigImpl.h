@class NSString;

@interface AWECAKCommonConfigImpl : NSObject <CAKCommonConfigProtocol> {
    BOOL _optimzieNextiCloud;
    BOOL _useBpeaApiSwitch;
    BOOL _showMediaTypeImageView;
    BOOL _enablePreloadDebug;
    BOOL _disablePhotoLibraryChangeObserverForIOS17;
    BOOL _selectCoverImageOpt;
    BOOL _albumLivePhotoSupportSwitch;
    BOOL _albumPhotoTabLivePhotoImportAsImage;
    BOOL _albumLivePhotoPreviewPlayFull;
    BOOL _albumShowSmallLivePhotoTagOnIpad;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSystemVersionGreaterThan:(id)a0;

- (id)searchConfig;
- (BOOL)isEnableMaterialFollowUpAlbumAbilityUnifiedStatus;
- (BOOL)enableAIMemoriesOneClipFilm;
- (BOOL)singleChooseAlbumRemovePreviewAutoSelection;
- (BOOL)optimzieNextiCloud;
- (BOOL)showMediaTypeImageView;
- (BOOL)useBpeaApi;
- (BOOL)enablePreloadDebug;
- (BOOL)disablePhotoLibraryChangeObserverForIOS17;
- (BOOL)selectCoverImageOpt;
- (double)recommendLoop;
- (BOOL)isAlbumLocationPermissionGranted;
- (BOOL)albumLivePhotoSupportSwitch;
- (BOOL)albumPhotoTabLivePhotoImportAsImage;
- (BOOL)albumLivePhotoPreviewPlayFull;
- (BOOL)albumShowSmallLivePhotoTagOnIpad;
- (BOOL)enableGoSettingsStripOptimize;
- (BOOL)enableAlbumRACOpt;
- (BOOL)enablePhotoPickerIOS18BugFix;
- (BOOL)enableDefaultSingleModeLivePhotoIconOptimize;
- (BOOL)enableAlbumScanForRecommentTab;
- (BOOL)enableAlbumReloadVisibleCellCrashFix;
- (BOOL)enableAlbumVideoPreviewSupportPlayControl;
- (long long)albumPreviewCleanScreenPlan;
- (BOOL)albumSearchMediaTypePrepareFix;
- (BOOL)isEnableAlbumShootWayEmptyOptStatus;
- (BOOL)enableDownloadiCloudImage;
- (BOOL)isEnableAlbumSearchFetchOPT;
- (BOOL)isEnableAlbumListFetchOPT;
- (BOOL)enableAlbumPreviewZoomBugfix;
- (BOOL)AIMemoriesPermissionDefaultValue;
- (id)AIMemoriesSearchQueryBlockList;
- (long long)AiMemoriesGenerateCollectionMinAssetCnt;
- (long long)AiMemoriesGenerateCollectionMinUploadEmbAssetCnt;
- (long long)AiMemoryCollectionSelectAssetCountMin;
- (long long)AiMemoryCollectionSelectAssetCountMax;
- (long long)AiMemoryC1500FilteredAssetMinCount;
- (BOOL)shouldAIMemoriesShowAggregateRowItems;
- (long long)AiMemoryC1500UploadCount;
- (long long)AIMemoryCollectionAssetCountMin;
- (long long)AIMemoryMarketCollectionShowedCount;
- (id)AIMemoriesCollectionScoreWeightConfig;
- (BOOL)AIMemoriesHasShownAIMemoriesSearchBarUsePreciseKey;
- (BOOL)enableAIMemoriesCategoryViewShakeFix;
- (BOOL)CAKAlbumBaseViewModelDeallocStuckFix;
- (id)AiMemoryCollectionSelectAssetCountConfig;
- (id)userID;
- (id)init;
- (BOOL)shouldShowSearchBar;

@end
