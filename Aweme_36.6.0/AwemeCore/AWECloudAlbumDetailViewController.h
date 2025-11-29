@class NSString, AWECloudAlbumDetailTimeTracker, IESContainer;
@protocol AWECloudAlbumDetailComponentManager, AWECloudAlbumDetailInputDataProtocol, ACCZoomContextOutterProviderProtocol;

@interface AWECloudAlbumDetailViewController : UIViewController <AWEZoomTransitionOuterContextProvider, AWECloudAlbumDetailControllerProtocol, AWECloudAlbumDetailViewControllerTransitionDelegate>

@property (retain, nonatomic) IESContainer *context;
@property (retain, nonatomic) id<AWECloudAlbumDetailComponentManager> componentManager;
@property (nonatomic) BOOL visible;
@property (retain, nonatomic) AWECloudAlbumDetailTimeTracker *timeTracker;
@property (readonly, nonatomic) id<AWECloudAlbumDetailInputDataProtocol> inputData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCZoomContextOutterProviderProtocol> cloudAlbumTransitionDelegate;

- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (id)initWithInputData:(id)a0;
- (void)close;
- (id)controller;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
