@class NSString;

@interface AWEDitoGeneralContainerExtensionManager : DitoExtensionManager <AWEDitoGeneralContainerExtensionManagerExtraProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)ditoViewControllerDidTapEmptyPagePrimaryButton:(id)a0;
- (void)ditoViewControllerViewChangeToState:(unsigned long long)a0 withConfig:(id)a1;

@end
