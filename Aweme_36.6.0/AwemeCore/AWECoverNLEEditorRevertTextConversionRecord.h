@class ACCGestureResponsibleStickerView;

@interface AWECoverNLEEditorRevertTextConversionRecord : AWECoverNLEEditorRevertNLERecord

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } oldFrame;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } oldTransform;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } newFrame;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } newTransform;
@property (retain, nonatomic) ACCGestureResponsibleStickerView *gestureResponsibleStickerView;
@property (copy, nonatomic) id /* block */ undoBlock;
@property (copy, nonatomic) id /* block */ redoBlock;

- (void)undoToCommit:(id)a0;
- (void)redoToCommit:(id)a0;
- (void)recoverStickerViewIfNeeded:(id)a0 isUndo:(BOOL)a1;
- (void).cxx_destruct;
- (void)record;
- (void)redo;
- (void)undo;

@end
