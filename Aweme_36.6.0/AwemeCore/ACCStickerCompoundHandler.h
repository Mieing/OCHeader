@class NSArray, NSMutableArray, NSString;

@interface ACCStickerCompoundHandler : ACCStickerHandler <ACCStickerCompoundHandler>

@property (retain, nonatomic) NSMutableArray *internalHandlers;
@property (readonly, nonatomic) NSArray *handlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)compoundHandler;

- (id)stickerContainerView;
- (void)addInteractionStickerInfoToArray:(id)a0 idx:(long long)a1;
- (void)updateStickerViewSizeIfNeeded;
- (void)doRender;
- (BOOL)canHandleSticker:(id)a0;
- (void)apply:(id)a0 index:(unsigned long long)a1 doRender:(BOOL)a2;
- (void)applyAsNleVirtualSticker:(id)a0 index:(unsigned long long)a1;
- (BOOL)canRecoverSticker:(id)a0;
- (void)recoverSticker:(id)a0;
- (void)expressSticker:(id)a0 onCompletion:(id /* block */)a1;
- (void)expressSticker:(id)a0;
- (void)updateSticker:(long long)a0 withNewId:(long long)a1;
- (void)setStickerContainerLoader:(id /* block */)a0;
- (void)setUiContainerView:(id)a0;
- (void)setEditSticker:(id)a0;
- (void).cxx_destruct;
- (void)setPlayer:(id)a0;
- (void)setLogger:(id)a0;
- (void)removeHandler:(id)a0;
- (void)finish;
- (void)reset;
- (void)addHandler:(id)a0;

@end
