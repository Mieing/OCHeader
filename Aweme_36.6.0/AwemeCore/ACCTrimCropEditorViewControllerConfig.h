@class ACCTrimCropEditViewModel, IESContainer;

@interface ACCTrimCropEditorViewControllerConfig : NSObject

@property (retain, nonatomic) IESContainer *businessContainer;
@property (retain, nonatomic) ACCTrimCropEditViewModel *viewModel;

- (void)prepareContext;
- (void)assemblyBottomBar:(id)a0;
- (void).cxx_destruct;

@end
