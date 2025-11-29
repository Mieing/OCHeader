@class ACCCameraSubscription, AWECoverNLEEditorRevertGestureRecord, NSString, AWEVideoPublishViewModel, NSMutableArray, AWECoverEditorNLEEditorInputData;
@protocol IESServiceProvider;

@interface AWECoverNLEEidtorRevertImp : NSObject <AWECoverNLEEditorRevertService>

@property (retain, nonatomic) NSMutableArray *undoArray;
@property (retain, nonatomic) NSMutableArray *redoArray;
@property (nonatomic) long long maxUndoCount;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (readonly, weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (retain, nonatomic) AWECoverEditorNLEEditorInputData *inputData;
@property (retain, nonatomic) AWECoverNLEEditorRevertGestureRecord *currentGestureRecognizerRecord;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithServiceProvider:(id)a0 repository:(id)a1;
- (void)cleanUndo;
- (void)cleanRedo;
- (void)recordTextChangeWithSticker:(long long)a0 oriText:(id)a1 text:(id)a2 index:(long long)a3 textStickerView:(id)a4 undoCompletion:(id /* block */)a5 redoCompletion:(id /* block */)a6;
- (void)recordTextChangeWithSticker:(long long)a0 oriFont:(id)a1 font:(id)a2 index:(long long)a3 textStickerView:(id)a4 undoCompletion:(id /* block */)a5 redoCompletion:(id /* block */)a6;
- (void)recordTextChangeWithSticker:(long long)a0 oriStyle:(unsigned long long)a1 style:(unsigned long long)a2 index:(long long)a3 textStickerView:(id)a4 undoCompletion:(id /* block */)a5 redoCompletion:(id /* block */)a6;
- (void)recordTextChangeWithSticker:(long long)a0 oriColor:(id)a1 color:(id)a2 index:(long long)a3 textStickerView:(id)a4 undoCompletion:(id /* block */)a5 redoCompletion:(id /* block */)a6;
- (void)recordTextChangeWithSticker:(long long)a0 oriAligment:(long long)a1 aligment:(long long)a2 index:(long long)a3 textStickerView:(id)a4 undoCompletion:(id /* block */)a5 redoCompletion:(id /* block */)a6;
- (void)recordTextWillChangeWithSticker:(long long)a0;
- (void)recordTextDidChangeWithSticker:(long long)a0 undoCompletion:(id /* block */)a1 redoCompletion:(id /* block */)a2;
- (void)recordCustomTextStickerDidDelete:(long long)a0 textStickerView:(id)a1 undoCompletion:(id /* block */)a2 redoCompletion:(id /* block */)a3;
- (void)recordStartGestureRecognizer:(id)a0 wrapperView:(id)a1;
- (void)recordEndGestureRecognizer:(id)a0 wrapperView:(id)a1 undoCompletion:(id /* block */)a2 redoCompletion:(id /* block */)a3;
- (void)recordMirrorWithSticker:(long long)a0;
- (void)recordTemplateWillChanged:(id)a0 undoCompletion:(id /* block */)a1;
- (void)recordTemplateDidChanged:(id)a0 redoCompletion:(id /* block */)a1;
- (void)recordStickerWillAdd:(long long)a0;
- (void)recordStickerDidAdd:(long long)a0 undoCompletion:(id /* block */)a1 redoCompletion:(id /* block */)a2;
- (void)recordCustomTextStickerWillConversion:(long long)a0 textStickerView:(id)a1;
- (void)recordCustomTextStickerDidConversion:(long long)a0 textStickerView:(id)a1 undoCompletion:(id /* block */)a2 redoCompletion:(id /* block */)a3;
- (void)recordCustomTextStickerDidAdd:(long long)a0 textStickerView:(id)a1 undoCompletion:(id /* block */)a2 redoCompletion:(id /* block */)a3;
- (void)recordStickerWillDelete:(long long)a0;
- (void)recordStickerDidDelete:(long long)a0 undoCompletion:(id /* block */)a1 redoCompletion:(id /* block */)a2;
- (void)recordCanvasStartGestureRecognizer:(id)a0 undoCompletion:(id /* block */)a1;
- (void)recordCanvasEndGestureRecognizer:(id)a0 redoCompletion:(id /* block */)a1;
- (void)recordCanvasStartChangeCoverImageUndoCompletion:(id /* block */)a0;
- (void)recordCanvasEndChangeCoverImageRedoCompletion:(id /* block */)a0;
- (void)undoDidCompleted;
- (void)undoStatusChanged;
- (id)p_recordNLEWillChange;
- (id)p_recordNLEDidChangeUndoCompletion:(id /* block */)a0 redoCompletion:(id /* block */)a1;
- (void)addRecord:(id)a0;
- (BOOL)canUndo;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;
- (BOOL)canRedo;
- (void)redo;
- (void)undo;
- (void)removeSubscriber:(id)a0;

@end
