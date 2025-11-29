@class NSString, AEKUndoRedoAbleImpl, AEKRenderAbleImpl, AEKBaseData;
@protocol AEKSubscriberProvider;

@interface AEKCoreUnitImpl : NSObject <AEKEditorConvertible, AEKRenderAble, AEKDoable, AEKUndoRedoAble>

@property (retain, nonatomic) AEKBaseData *baseData;
@property (weak, nonatomic) id<AEKSubscriberProvider> subscriberProvider;
@property (retain, nonatomic) AEKRenderAbleImpl *renderImpl;
@property (retain, nonatomic) AEKUndoRedoAbleImpl *undoRedoImpl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)syncRefreshCurrentFrame:(double)a0;
- (id)asyncRefreshCurrentFrame;
- (id)asyncForceModeRefreshCurrentFrame;
- (BOOL)needToCommit;
- (id)forceCommitStickerParam:(id)a0;
- (BOOL)undoWithoutRender;
- (BOOL)redoWithoutRender;
- (BOOL)gotoCommit:(id)a0;
- (void)resetHead:(id /* block */)a0;
- (BOOL)resetHeadWithoutRender;
- (id)initWithBaseData:(id)a0 subscriberProvider:(id)a1;
- (BOOL)canUndo;
- (BOOL)done:(id)a0;
- (void).cxx_destruct;
- (BOOL)done;
- (id)commit;
- (BOOL)canRedo;
- (BOOL)redo;
- (BOOL)undo;
- (id)render;
- (id)render:(id /* block */)a0;

@end
