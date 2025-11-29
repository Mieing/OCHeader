@class NSArray, NSString;

@interface AEKSimpleTextStickerEditorImpl : AEKBaseRenderEditor <AEKSimpleTextStickerEditor>

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
- (BOOL)hasStickerWithId:(id)a0;
- (void).cxx_destruct;
- (id)batch:(id /* block */)a0;

@end
