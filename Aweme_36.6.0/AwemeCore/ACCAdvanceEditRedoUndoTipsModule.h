@class NSString;
@protocol DVEToastProtocol, DVETrackEventProtocol, DVENLEEditorProtocol, DVECoreActionServiceProtocol, DVEEditingRuntimeProtocol;

@interface ACCAdvanceEditRedoUndoTipsModule : DVEFeatureModule <DVECoreActionDelegate>

@property (weak, nonatomic) id<DVECoreActionServiceProtocol> actionService;
@property (weak, nonatomic) id<DVEToastProtocol> toastService;
@property (weak, nonatomic) id<DVETrackEventProtocol> trackEventService;
@property (weak, nonatomic) id<DVENLEEditorProtocol> nleEditorService;
@property (weak, nonatomic) id<DVEEditingRuntimeProtocol> mediaContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didDoneChanged:(unsigned long long)a0 msg:(id)a1;
- (void)setupObserver;
- (void)moduleDidMount;
- (void)trackEventForDoneType:(unsigned long long)a0 action:(id)a1;
- (void).cxx_destruct;

@end
