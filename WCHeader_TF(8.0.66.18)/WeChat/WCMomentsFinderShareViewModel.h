@class VideoCompositionAttr, NSString, NSArray, SightDraft, EditVideoAttr;

@interface WCMomentsFinderShareViewModel : WCMomentsPostShareBaseViewModel {
    BOOL _hasRecordedDisplay;
    BOOL _hasRecordedClick;
    BOOL _isBizShareEnabled;
    BOOL _isUseStablizeShareButton;
}

@property (nonatomic) double Configurations_minimumVideoDuration;
@property (nonatomic) long long Configurations_minimumImageCount;
@property (nonatomic) BOOL Configurations_alwaysAllowsImagesWithPOI;
@property (copy, nonatomic) NSString *Configurations_customizedShareTips;
@property (nonatomic) BOOL isAsyncExportingVideo;
@property (retain, nonatomic) EditVideoAttr *videoEditAttributes;
@property (retain, nonatomic) VideoCompositionAttr *compositionAttr;
@property (copy, nonatomic) NSArray *videoEditWidgetStateList;
@property (retain, nonatomic) SightDraft *sightDraft;

+ (id)sharedReportCache;

- (id)reportCache;
- (long long)reportSceneFromShareScene:(long long)a0;
- (void)reportFinderWithAction:(long long)a0 finderPostSessionID:(id)a1;
- (id)initWithDataItem:(id)a0 scene:(long long)a1;
- (id)svgIconName;
- (id)svgIconColor;
- (id)tips;
- (BOOL)validateDevice;
- (BOOL)validateConflicts;
- (BOOL)validateDataItem;
- (BOOL)validateMediaItemList;
- (BOOL)validateMediaItemListForScene;
- (BOOL)validCompositeVideoTask;
- (BOOL)shouldShowShareButton;
- (BOOL)hasActionRecordForShowingShareButton;
- (void)willDisplayShareButton;
- (void)didClickShareButton;
- (void)willStartSharing;
- (BOOL)reallyShareFromViewController:(id)a0 withCompletionHandler:(id /* block */)a1;
- (BOOL)_shareVideoToFinderFromViewController:(id)a0 withCompletionHandler:(id /* block */)a1;
- (BOOL)_shareImagesToFinderFromViewController:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)fetchAssets;
- (id)generateFinderImageModels;
- (void).cxx_destruct;

@end
