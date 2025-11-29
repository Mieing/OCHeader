@class NSMutableArray;

@interface MVImagePreviewDataSourceForDraft : MVImagePreviewDataSource

@property (retain, nonatomic) NSMutableArray *draftItems;

- (id)initWithDraftItems:(id)a0;
- (id)previewAssetInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)previewAssetTotal;
- (long long)previewIndexForAssetInfo:(id)a0;
- (id)identifier;
- (id)generateSelectItemModelFromAssetInfo:(id)a0;
- (void).cxx_destruct;

@end
