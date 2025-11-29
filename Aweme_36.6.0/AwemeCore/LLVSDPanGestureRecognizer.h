@class NSString, LLVSDManager;

@interface LLVSDPanGestureRecognizer : UIPanGestureRecognizer <IESLLNoActionEventHandlerGestureProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) LLVSDManager *manager;

- (BOOL)shouldBeTreatAsUsefulAction;
- (void).cxx_destruct;

@end
