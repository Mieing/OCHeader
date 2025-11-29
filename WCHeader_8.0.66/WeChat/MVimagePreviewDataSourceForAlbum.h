@class NSMutableArray;

@interface MVimagePreviewDataSourceForAlbum : MVImagePreviewDataSource

@property (retain, nonatomic) NSMutableArray *modelList;

- (id)initWithModelList:(id)a0;
- (long long)previewIndexForAssetInfo:(id)a0;
- (id)previewAssetInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)previewAssetTotal;
- (id)generateSelectItemModelFromAssetInfo:(id)a0;
- (void).cxx_destruct;

@end
