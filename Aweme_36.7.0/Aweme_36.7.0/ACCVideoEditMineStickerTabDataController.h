@class NSIndexPath, IESInfoStickerModel;

@interface ACCVideoEditMineStickerTabDataController : ACCVideoEditStickerTabDataController

@property (retain, nonatomic) IESInfoStickerModel *customUploadSticker;
@property (retain, nonatomic) NSIndexPath *indexPathLongPressed;

- (id)cellIdentifierAtIndexPath:(id)a0;
- (id)initWithCategoryModel:(id)a0;
- (void)fetchCategoryDataWithCompletion:(id /* block */)a0;
- (id)transformInfoStickerWithData:(id)a0 isThirdPartySticker:(BOOL)a1;
- (id)defaultUploadCustomSticker;
- (void)filterStickerHasDeletedWith:(id)a0 stickerCacheModels:(id)a1;
- (BOOL)isFunctionSticker:(id)a0;
- (void)deleteStickerAtIndexPath:(id)a0 completion:(id /* block */)a1;
- (id)cellIdentifiers;
- (Class)cellClassForIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)shouldFetchData;

@end
