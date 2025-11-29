@class AWEMemoriesPlayerConfigManager, AWEMemoriesPlayerDataController, IESContainer, AWEMemoriesPlayerControlManager, NSString, AWEMemoriesPlayerComponentManager;

@interface AWEMemoriesPlayerContainerViewController : UIViewController <AWEMemoriesPlayerContainerService>

@property (retain, nonatomic) AWEMemoriesPlayerDataController *dataController;
@property (retain, nonatomic) IESContainer *context;
@property (retain, nonatomic) AWEMemoriesPlayerComponentManager *componentManager;
@property (retain, nonatomic) AWEMemoriesPlayerConfigManager *playerConfigManager;
@property (retain, nonatomic) AWEMemoriesPlayerControlManager *playerControlManager;
@property (retain, nonatomic) Class gridViewControllerClass;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ firstFrameBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataController:(id)a0;
- (void)registGridViewControllerClass:(Class)a0;
- (void)registPlayerDismissBlock:(id /* block */)a0;
- (void)registPlayerConfigManager:(id)a0;
- (void)registPlayerControlManager:(id)a0;
- (void)registPlayerFirstFrameBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setupContext;

@end
