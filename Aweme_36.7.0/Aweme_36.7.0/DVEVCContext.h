@class NSString, NLEInterface_OC;
@protocol IESServiceProvider, DVECoreDraftServiceProtocol, DVECoreCanvasProtocol, DVECoreActionServiceProtocol, DVENLEEditorProtocol, DVEEditorEventProtocol, DVEPlayerServiceProtocol, DVEEditingRuntimeProtocol;

@interface DVEVCContext : NSObject <DVECoreActionDelegate, DVEMediaContextNLEEditorDelegate, DVEMediaContextNLEInterfaceDelegate>

@property (weak, nonatomic) NLEInterface_OC *nle;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<DVEEditingRuntimeProtocol> mediaContext;
@property (weak, nonatomic) id<DVEPlayerServiceProtocol> playerService;
@property (weak, nonatomic) id<DVECoreCanvasProtocol> canvasEditor;
@property (weak, nonatomic) id<DVECoreDraftServiceProtocol> draftService;
@property (weak, nonatomic) id<DVECoreActionServiceProtocol> actionService;
@property (weak, nonatomic) id<DVENLEEditorProtocol> nleEditor;
@property (weak, nonatomic) id<DVEEditorEventProtocol> extraService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *draftFolder;

- (void)didDoneChanged:(unsigned long long)a0 msg:(id)a1;
- (void)nleEditorDidChange;
- (id)mediaDelegateNLEModel;
- (id)mediaDelegateAssetFromSlot:(id)a0;
- (id)mediaDelegateGetAbsolutePathWithResource:(id)a0;
- (void)creatNLEEditor;
- (void).cxx_destruct;
- (id)initWithProvider:(id)a0;
- (void)dealloc;

@end
