@class NSString;
@protocol IESServiceProvider, DVENLEEditorProtocol, DVENLEInterfaceProtocol;

@interface DVEBrushStickerEditor : NSObject <DVECoreBrushStickerEditorProtocol>

@property (weak, nonatomic) id<DVENLEInterfaceProtocol> nle;
@property (weak, nonatomic) id<DVENLEEditorProtocol> nleEditor;
@property (nonatomic) unsigned long long maxUndoCount;
@property (nonatomic) BOOL canUndo;
@property (nonatomic) BOOL canRedo;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)addBrushStickerWithCachePath:(id)a0 canvasSize:(id)a1 historyMode:(long long)a2;
- (id)addBrushStickerWithCachePath:(id)a0 canvasSize:(id)a1 historyMode:(long long)a2 updateMode:(long long)a3;
- (struct CGPoint { double x0; double x1; })effectTouchPointWithPoint:(struct CGPoint { double x0; double x1; })a0 view:(id)a1;
- (void)brushStickerUndoWithSlotId:(id)a0;
- (void)brushStickerRedoWithSlotId:(id)a0;
- (void)updateBrushStickerWithSlotId:(id)a0 option:(unsigned long long)a1 touchPoint:(id)a2;
- (void)updateBrushStickerWithSlotId:(id)a0 path:(id)a1 option:(unsigned long long)a2 touchPoint:(id)a3;
- (void)updateBrushStickerWithSlotId:(id)a0 option:(unsigned long long)a1 brushColor:(id)a2 touchPoint:(id)a3;
- (void)updateBrushStickerWithSlotId:(id)a0 option:(unsigned long long)a1 brushColor:(id)a2 brushSize:(double)a3 touchPoint:(id)a4;
- (void)undoBrushStickerWithSlotId:(id)a0 count:(unsigned long long)a1;
- (void)resetBrushStickerIncrementalEditWithSlotId:(id)a0 completion:(id /* block */)a1;
- (void)clearBrushStickerUndoCountWithSlotId:(id)a0;
- (id)getBrushSlotIfExist;
- (void)updateBrushStickerParamsWithSlotId:(id)a0 brushColor:(id)a1 brushSize:(double)a2 relativeBrushSize:(double)a3;
- (void)commitBrushUpdateWithSlotId:(id)a0 segment:(id)a1;
- (void)refreshBrushUndoRedoWithBrushStickerSegment:(id)a0;
- (void)updateBrushStickerWithSlotId:(id)a0 option:(unsigned long long)a1 brushSize:(double)a2 touchPoint:(id)a3;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
