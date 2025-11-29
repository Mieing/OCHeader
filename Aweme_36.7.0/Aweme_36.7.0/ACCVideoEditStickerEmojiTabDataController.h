@interface ACCVideoEditStickerEmojiTabDataController : ACCVideoEditStickerTabDataController

- (id)cellIdentifierAtIndexPath:(id)a0;
- (void)fetchCategoryDataWithCompletion:(id /* block */)a0;
- (id)cellIdentifiers;
- (Class)cellClassForIdentifier:(id)a0;
- (void)p_updateStatusWithResponse:(id)a0;
- (id)dataRequest;

@end
