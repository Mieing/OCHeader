@class NSString, ACCRepositoryWorkspace;
@protocol AEKBaseStickerEditor, AEKNewTextStickerEditor, AEKFilterEditor, AEKMegaEditor, AEKRuntimeEditor, AEKTextStickerEditor, AEKTemplateEditor, AEKExtraDataRepository, AEKDiffEngine, AEKVideoEditor, AEKEffectEditor, AEKBranchEditor, AEKUpgradeFilterEditor, AEKSimpleTextStickerEditor, AEKInfoStickerEditor, AEKAudioEditor;

@interface AEKMultiMegaEditorImpl : NSObject <AEKMultiMegaEditor>

@property (weak, nonatomic) ACCRepositoryWorkspace *workspace;
@property (retain, nonatomic) id<AEKMegaEditor> currentEditor;
@property (retain, nonatomic) id<AEKRuntimeEditor> runtimeEditor;
@property (retain, nonatomic) id<AEKBranchEditor> branchEditor;
@property (readonly, nonatomic) id<AEKVideoEditor> videoEditor;
@property (readonly, nonatomic) id<AEKAudioEditor> audioEditor;
@property (readonly, nonatomic) id<AEKUpgradeFilterEditor> filterEditor;
@property (readonly, nonatomic) id<AEKUpgradeFilterEditor> adjustEditor;
@property (readonly, nonatomic) id<AEKFilterEditor> beautyEditor;
@property (readonly, nonatomic) id<AEKBaseStickerEditor> baseStickerEditor;
@property (readonly, nonatomic) id<AEKInfoStickerEditor> infoStickerEditor;
@property (readonly, nonatomic) id<AEKTextStickerEditor> textStickerEditor;
@property (readonly, nonatomic) id<AEKNewTextStickerEditor> textNewStickerEditor;
@property (readonly, nonatomic) id<AEKSimpleTextStickerEditor> simpleTextStickerEditor;
@property (readonly, nonatomic) id<AEKEffectEditor> effectEditor;
@property (readonly, nonatomic) id<AEKTemplateEditor> templateEditor;
@property (readonly, nonatomic) id<AEKExtraDataRepository> extraDataRepository;
@property (readonly, nonatomic) id<AEKDiffEngine> diffEngine;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)syncRefreshCurrentFrame:(double)a0;
- (BOOL)replaceMegaData:(id)a0;
- (void)setRenderHandler:(id)a0 forType:(unsigned long long)a1;
- (void)addLifeCycleSubscriber:(id)a0;
- (void)removeLifeCycleSubscriber:(id)a0;
- (void)setDiffSubscriber:(id)a0 forKey:(id)a1;
- (void)removeDiffSubscriber:(id)a0;
- (void)triggerDiffChanges:(id)a0 fromSource:(unsigned long long)a1;
- (void)addDoneSubscriber:(id)a0;
- (void)removeDoneSubscriber:(id)a0;
- (void)addMegaDataSubscriber:(id)a0;
- (void)removeMegaDataSubscriber:(id)a0;
- (id)deepClone;
- (id)deepCloneAndChangeID;
- (id)asyncRefreshCurrentFrame;
- (id)asyncForceModeRefreshCurrentFrame;
- (BOOL)needToCommit;
- (id)forceCommitStickerParam:(id)a0;
- (BOOL)undoWithoutRender;
- (BOOL)redoWithoutRender;
- (BOOL)gotoCommit:(id)a0;
- (void)resetHead:(id /* block */)a0;
- (BOOL)resetHeadWithoutRender;
- (id)megaEditorArray;
- (BOOL)anyHasEdited;
- (BOOL)canUndo;
- (BOOL)done:(id)a0;
- (void).cxx_destruct;
- (id)initWithWorkspace:(id)a0;
- (BOOL)done;
- (id)commit;
- (BOOL)canRedo;
- (BOOL)redo;
- (BOOL)undo;
- (id)render;
- (BOOL)hasEdited;
- (id)render:(id /* block */)a0;
- (id)toJsonString;

@end
