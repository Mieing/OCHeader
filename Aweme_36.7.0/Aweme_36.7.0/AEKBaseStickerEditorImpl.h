@class NSArray, NSString;

@interface AEKBaseStickerEditorImpl : AEKBaseRenderEditor <AEKBaseStickerEditor>

@property (retain, nonatomic) NSArray *stickerOperators;
@property (readonly, nonatomic) NSArray *stickers;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)stickerWithId:(id)a0;
- (BOOL)hasStickerWithStickerId:(id)a0;
- (long long)getMaxLayer;
- (void).cxx_destruct;
- (id)batch:(id /* block */)a0;

@end
