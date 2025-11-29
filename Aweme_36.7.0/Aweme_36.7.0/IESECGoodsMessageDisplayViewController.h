@class IESECGoodsMessageDisplayCustomUIConfig, NSString, IESECGoodsDetailParameters, IESECGCDTimer, UITableView;
@protocol IESECGoodsMessageDisplayViewControllerDelegate;

@interface IESECGoodsMessageDisplayViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) IESECGoodsDetailParameters *parameters;
@property (retain, nonatomic) UITableView *mainTableView;
@property (retain, nonatomic) IESECGCDTimer *timer;
@property (nonatomic) long long currentSectionIndex;
@property (retain, nonatomic) IESECGoodsMessageDisplayCustomUIConfig *uiConfig;
@property (weak, nonatomic) id<IESECGoodsMessageDisplayViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)autoScroll;
- (id)initWithGoodsDetailParameters:(id)a0;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)stop;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;

@end
