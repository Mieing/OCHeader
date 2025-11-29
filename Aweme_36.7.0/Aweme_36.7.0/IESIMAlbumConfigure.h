@class NSString;

@interface IESIMAlbumConfigure : NSObject <IESIMAlbumConfigureInterface>

@property (nonatomic) BOOL enableSearch;
@property (nonatomic) BOOL enableMixedAssetsTab;
@property (nonatomic) BOOL enablePhotoAssetsTab;
@property (nonatomic) BOOL enableVideoAssetsTab;
@property (nonatomic) BOOL enableFavoriteTab;
@property (nonatomic) BOOL enableLivePhoto;
@property (nonatomic) BOOL enablePreview;
@property (nonatomic) BOOL enableMultiSelect;
@property (nonatomic) BOOL enableSwitchMultiSelect;
@property (nonatomic) BOOL scrollToBottom;
@property (nonatomic) long long columnNumber;
@property (nonatomic) unsigned long long maxAssetsSelectionCount;
@property (nonatomic) unsigned long long minAssetsSelectionCount;
@property (copy, nonatomic) id /* block */ customCellCreator;
@property (nonatomic) BOOL presentPreviewPageOnAlbumVC;
@property (nonatomic) BOOL enableLivePhotoTagForPhotoTab;
@property (nonatomic) BOOL iesim_needFetchAssetFromICloud;
@property (copy, nonatomic) id /* block */ iesim_completeSelectionHandler;
@property (copy, nonatomic) id /* block */ iesim_shouldSelectAssetHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
