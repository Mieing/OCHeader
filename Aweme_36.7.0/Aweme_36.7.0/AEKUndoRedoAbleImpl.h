@class NSString;
@protocol AEKEditorConvertible;

@interface AEKUndoRedoAbleImpl : NSObject <AEKDoable, AEKUndoRedoAble>

@property (weak, nonatomic) id<AEKEditorConvertible> convertor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)needToCommit;
- (id)forceCommitStickerParam:(id)a0;
- (BOOL)undoWithoutRender;
- (BOOL)redoWithoutRender;
- (BOOL)gotoCommit:(id)a0;
- (void)resetHead:(id /* block */)a0;
- (BOOL)resetHeadWithoutRender;
- (id)initWithConvertor:(id)a0;
- (BOOL)canUndo;
- (BOOL)done:(id)a0;
- (void).cxx_destruct;
- (BOOL)done;
- (id)commit;
- (BOOL)canRedo;
- (BOOL)redo;
- (BOOL)undo;

@end
