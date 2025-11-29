@class NSString, NLEEditor_OC, NLEModel_OC;

@interface DVENLEEditorWrapper : NSObject <DVENLEEditorProtocol>

@property (weak, nonatomic) NLEEditor_OC *nleEditor;
@property (retain, nonatomic) NLEModel_OC *nleModel;
@property (readonly, nonatomic) NLEModel_OC *stageModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)restore:(id)a0;
- (void)resetHeadWithCompletion:(id /* block */)a0;
- (id)initWithNLEEditor:(id)a0;
- (BOOL)canUndo;
- (void)removeListener:(id)a0;
- (void)addDelegate:(id)a0;
- (BOOL)done:(id)a0;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;
- (BOOL)done;
- (void)addListener:(id)a0;
- (void)commit;
- (void)commit:(id /* block */)a0;
- (id)store;
- (BOOL)canRedo;
- (BOOL)redo;
- (BOOL)undo;

@end
