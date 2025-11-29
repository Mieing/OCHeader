@class ACCSequenceEditContainer, ACCPublishViewControllerInputData, IESContainer, NSString, AWEResourceUploadParametersResponseModel, AWEVideoPublishViewModel, AWEPostPageServiceCoordinator;
@protocol AWEPostPageElementCenter, AWEPostPagePreUpdatePublishModelService, IESServiceProvider;

@interface AWEVideoNewPublishViewController : UIViewController <AWEStudioTransitionPublisherContextProvider, AWEStudioTransitionPublisherToPreviewerContextProvider, AWEVideoNewPublishViewControllerProtocol>

@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (retain, nonatomic) AWEResourceUploadParametersResponseModel *uploadParamsCache;
@property (retain, nonatomic) ACCPublishViewControllerInputData *inputData;
@property (retain, nonatomic) id<IESServiceProvider> serviceProvider;
@property (retain, nonatomic) id<AWEPostPageElementCenter> elementCenter;
@property (weak, nonatomic) AWEPostPageServiceCoordinator *serviceCoordinator;
@property (weak, nonatomic) IESContainer *serviceContainer;
@property (nonatomic) BOOL didViewAppear;
@property (retain, nonatomic) id<AWEPostPagePreUpdatePublishModelService> preUpdatePublishModelService;
@property (retain, nonatomic) ACCSequenceEditContainer *sequenceEditServiceProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithInputData:(id)a0;
- (void)removePreUploadingTask;
- (void)configServiceContainer;
- (void)configPreUpdatePublishModelServiceIfNeeded;
- (void)configPopupHandlerService:(id)a0;
- (void)newConfigPopupHandlerService:(id)a0;
- (id)dispatcher;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
