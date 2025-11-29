@class RTVInteractionControlSegmentControllerModel, RTVUISectionModel, NSString, RTVInteractionMessageListViewController;
@protocol RTVInteractionControlSegmentControllerDelegate, RTVXRControllerInjector, RTVCollectionViewControllerSegmentControllerDelegate, RTVInteractionToolBarViewControllerConfigurator, RTVInteractionConfigureManagerInterface, RTVXRCaptureController, RTVSettingsManager, RTVInteractionControlViewController, RTVInteractionController;

@interface RTVInteractionControlSegmentController : NSObject <RTVXRCaptureControllerObserver, RTVInteractionMessageListViewControllerDelegate, RTVCollectionViewControllerSegmentController, RTVInteractionControllerObserver>

@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) id<RTVInteractionController> interactionController;
@property (retain, nonatomic) RTVUISectionModel *sectionModel;
@property (retain, nonatomic) RTVInteractionMessageListViewController *inputViewController;
@property (readonly, weak, nonatomic) id<RTVInteractionControlViewController> controlViewController;
@property (readonly, weak, nonatomic) id<RTVXRCaptureController> captureController;
@property (readonly, weak, nonatomic) id<RTVInteractionToolBarViewControllerConfigurator> toolBarConfigurator;
@property (readonly, nonatomic) id<RTVInteractionConfigureManagerInterface> configureManager;
@property (readonly, nonatomic) id<RTVSettingsManager> settingManager;
@property (retain, nonatomic) RTVInteractionControlSegmentControllerModel *model;
@property (weak, nonatomic) id<RTVInteractionControlSegmentControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<RTVCollectionViewControllerSegmentControllerDelegate> segmentDelegate;

- (id)getInKey;
- (void)rtv_awakeFromControllerInjector;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)registReusableViewForCollectionView:(id)a0;
- (struct CGSize { double x0; double x1; })itemSizeForCollectionView:(id)a0 withCellModel:(id)a1;
- (void)didChangeInteractionController:(id)a0 context:(id)a1;
- (void)interactionMessageListViewController:(id)a0 didSendContent:(id)a1;
- (void)collectionView:(id)a0 didSelectCellModel:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 insetForSectionIdentifier:(id)a1;
- (double)collectionView:(id)a0 minimumInteritemSpacingForSectionAtIndex:(id)a1;
- (void)showInputViewController;
- (void)xrCaptureController:(id)a0 didChangeToMicrophoneMuted:(BOOL)a1;
- (void)__showInputViewController;
- (BOOL)__isNewStyle;
- (id)__newStyleCellModels;
- (id)__defaultStyleCellModels;
- (id)__inputCellIdentifier;
- (id)__emptyPlaceholderCellIdentifier;
- (double)__emptyCellWidth;
- (id)__iconCellIdentifier;
- (id)__inviteCellIdentifier;
- (id)cellModels;
- (void).cxx_destruct;
- (id)sectionModels;
- (void)dealloc;

@end
