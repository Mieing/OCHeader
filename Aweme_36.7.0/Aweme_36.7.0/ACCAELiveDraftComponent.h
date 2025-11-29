@class ACCAELiveDraftViewModel, ACCAdvanceEditViewModel, NSString;
@protocol ACCAEViewContainerProtocol;

@interface ACCAELiveDraftComponent : ACCAdvanceEditComponent <DVECoreActionDelegate>

@property (weak, nonatomic) ACCAdvanceEditViewModel *advanceEditViewModel;
@property (retain, nonatomic) ACCAELiveDraftViewModel *viewModel;
@property (weak, nonatomic) id<ACCAEViewContainerProtocol> rootViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)nle;
- (void)componentDidMount;
- (void)bindEvents;
- (void)nleEditorDidChange;
- (void).cxx_destruct;

@end
