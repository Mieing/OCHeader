@class NSMutableArray, BDARewardedVideoAdBaseController, NSString, UIView, BDPUniqueID, BDPGameVideoAdBackupModel;
@protocol BDPGameVideoAdBackupControllerDelegate, BDXLynxViewProtocol;

@interface BDPGameVideoAdBackupController : UIViewController <LynxTemplateProvider, BDXKitViewLifecycleProtocol>

@property (nonatomic) BOOL hasSidebar;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPGameVideoAdBackupModel *dataModel;
@property (retain, nonatomic) UIView<BDXLynxViewProtocol> *lynxView;
@property (retain, nonatomic) NSMutableArray *subscriberList;
@property (weak, nonatomic) BDARewardedVideoAdBaseController *originVideo;
@property (weak, nonatomic) id<BDPGameVideoAdBackupControllerDelegate> gameVideoDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)view:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)view:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)loadTemplateWithUrl:(id)a0 onComplete:(id /* block */)a1;
- (void)registerSubscriber;
- (void)unregisterSubscriber;
- (id)preloadVideoIfNeed:(id)a0;
- (id)initWithBuilderBlock:(id /* block */)a0;
- (void)loadLynxView:(id)a0;
- (void)onLoadFail;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })generateLynxFrame;
- (id)generateLynxInitData:(id)a0 preloadTaskKey:(id)a1;
- (void)onLoadSuccess;
- (BOOL)canReward:(id)a0;
- (void)load;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)applicationDidEnterBackground;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)applicationWillEnterForeground;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;

@end
