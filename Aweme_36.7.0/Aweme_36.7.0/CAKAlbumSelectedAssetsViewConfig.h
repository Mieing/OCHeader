@class NSArray, NSNumber;

@interface CAKAlbumSelectedAssetsViewConfig : NSObject

@property (nonatomic) BOOL shouldHideSelectedAssetsViewWhenNotSelect;
@property (nonatomic) BOOL disableSelectedAssetsViewSeperator;
@property (nonatomic) BOOL enableSelectedAssetsViewForPreviewPage;
@property (nonatomic) BOOL shouldHideSelectedAssetsViewWhenNotSelectForPreviewPage;
@property (copy, nonatomic) NSArray *customCellItems;
@property (nonatomic) BOOL enableDragToMoveForSelectedAssetsViewInPreviewPage;
@property (nonatomic) BOOL enableDragToMoveForSelectedAssetsView;
@property (copy, nonatomic) NSNumber *forceHideLivePhotoIconInAssetSelectedView;
@property (copy, nonatomic) NSNumber *updatePreviewViewIfPhotoOrVideoArrayDidChange;

- (void).cxx_destruct;
- (id)init;

@end
