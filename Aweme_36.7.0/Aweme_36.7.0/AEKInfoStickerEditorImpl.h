@class NSArray, NSString;

@interface AEKInfoStickerEditorImpl : AEKBaseRenderEditor <AEKInfoStickerEditor>

@property (retain, nonatomic) NSArray *stickerOperators;
@property (readonly, nonatomic) NSArray *stickers;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)applyStashes:(id)a0 needApplyFilter:(id /* block */)a1;
- (id)stickerWithId:(id)a0;
- (BOOL)hasStickerWithStickerId:(id)a0;
- (id)addStickerWithResource:(id)a0 effectInfo:(id)a1 userInfo:(id)a2;
- (long long)getMaxLayer;
- (id)stashStickerWithFilter:(id /* block */)a0;
- (void).cxx_destruct;
- (id)batch:(id /* block */)a0;

@end
