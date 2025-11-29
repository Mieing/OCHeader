@class NSString, NSMutableArray;

@interface MVImagePreviewDataSource : NSObject <MMImagePreviewBrowserControllerDataSource>

@property (retain, nonatomic) NSMutableArray *selectedAssetInfosArray;
@property (retain, nonatomic) NSMutableArray *selectedViewModels;
@property (copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPreviewSelectedOnly;
- (id)selectedAssetInfosForPreview;
- (BOOL)isPreviewSelectedAssetInfosContainsVideo;
- (long long)previewIndexForAssetInfo:(id)a0;
- (id)previewAssetInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)previewAssetTotal;
- (id)customBrowserViewForAssetInfo:(id)a0;
- (BOOL)isPreviewStyleForFile;
- (BOOL)showSelectedNumbers;
- (void)reloadSelectedAssetInfos;
- (void)reloadSelectedWithSelectItemViewModels:(id)a0;
- (long long)indexForSelectedModel:(id)a0;
- (id)generateAssetInfoFromModel:(id)a0;
- (id)generateSelectItemModelFromAssetInfo:(id)a0;
- (void).cxx_destruct;

@end
