@class NSArray, NSString;

@interface AEKNewTextStickerEditorImpl : AEKBaseRenderEditor <AEKNewTextStickerEditor>

@property (retain, nonatomic) NSArray *stickerImpls;
@property (readonly, copy, nonatomic) NSArray *stickers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)applyStashes:(id)a0 needApplyFilter:(id /* block */)a1;
- (id)stashStickerWithFilter:(id /* block */)a0 isRemove:(BOOL)a1;
- (BOOL)hasStickerWithBlock:(id /* block */)a0;
- (id)stickerWithId:(id)a0;
- (id)stickersWithFilterBlock:(id /* block */)a0;
- (id)addStickerWithStickerData:(id)a0;
- (id)stickerWithFilterBlock:(id /* block */)a0;
- (id)addStickerWithResource:(id)a0;
- (BOOL)hasStickerWithId:(id)a0;
- (void)markInitialRichText:(id)a0 slot:(id)a1;
- (void).cxx_destruct;
- (id)batch:(id /* block */)a0;

@end
