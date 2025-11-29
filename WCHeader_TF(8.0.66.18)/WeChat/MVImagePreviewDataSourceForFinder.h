@protocol MMMusicDataVM;

@interface MVImagePreviewDataSourceForFinder : MVImagePreviewDataSource

@property (retain, nonatomic) id<MMMusicDataVM> dataViewModel;

- (id)initWithDataViewModel:(id)a0;
- (id)previewAssetInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)previewAssetTotal;
- (long long)previewIndexForAssetInfo:(id)a0;
- (id)generateSelectItemModelFromAssetInfo:(id)a0;
- (void).cxx_destruct;

@end
