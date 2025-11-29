@interface ACCVideoEditIMStickerTabDataController : ACCVideoEditStickerTabDataController

- (id)initWithCategoryModel:(id)a0;
- (void)imStickerLoadMonitorWithResult:(BOOL)a0 extraInfo:(id)a1;
- (void)fetchCategoryDataWithCompletion:(id /* block */)a0;
- (BOOL)shouldFetchData;

@end
