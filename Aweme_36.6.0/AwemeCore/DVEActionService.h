@class NSString, NLEModel_OC, NSHashTable;
@protocol DVEEditingRuntimeProtocol, DVENLEEditorProtocol, DVEToastProtocol, IESServiceProvider, DVEPlayerServiceProtocol, DVEDataRepositoryProtocol;

@interface DVEActionService : NSObject <NLEEditor_iOSListenerProtocol, NLEEditorDelegate, DVECoreActionServiceProtocol>

@property (weak, nonatomic) id<DVENLEEditorProtocol> nleEditor;
@property (weak, nonatomic) id<DVEEditingRuntimeProtocol> mediaContext;
@property (weak, nonatomic) id<DVEPlayerServiceProtocol> playerService;
@property (weak, nonatomic) id<DVEToastProtocol> toastView;
@property (weak, nonatomic) id<DVEDataRepositoryProtocol> dataRepository;
@property (retain, nonatomic) NSHashTable *listenerArray;
@property (retain, nonatomic) NLEModel_OC *willDoneModel;
@property (nonatomic) unsigned long long diffSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL activateUndoRedo;
@property (nonatomic) BOOL canUndo;
@property (nonatomic) BOOL canRedo;
@property (nonatomic) BOOL isNeedHideUnReDo;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;

- (void)didDoneChanged:(unsigned long long)a0 msg:(id)a1;
- (void)nleEditorDidChange:(id)a0;
- (void)nleEditorWillDone:(id)a0;
- (void)resetHeadWithCompletion:(id /* block */)a0;
- (void)refreshUndoRedo;
- (void)excuteUndo;
- (void)excuteRedo;
- (void)commitNLE:(BOOL)a0 info:(id)a1 completion:(id /* block */)a2;
- (void)commitNLE:(BOOL)a0;
- (void)commitNLE:(BOOL)a0 completion:(id /* block */)a1;
- (void)commitNLE:(BOOL)a0 message:(id)a1 completion:(id /* block */)a2;
- (void)commitNLE:(BOOL)a0 message:(id)a1;
- (void)commitNLEWithoutNotify:(BOOL)a0;
- (void)notifyUndoRedoWillClikeByUser;
- (void)notifyUndoRedoClikedByUser;
- (void)nleModelChanged:(id)a0 withResultCode:(int)a1;
- (void)removeListener:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)addListener:(id)a0;
- (void)clearListener;

@end
