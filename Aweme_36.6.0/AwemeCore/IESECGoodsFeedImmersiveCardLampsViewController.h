@class IESECImmersiveProductCardViewModel, UIStackView, IESECGCDTimer, NSString, UILabel, UIView, UITableView;

@interface IESECGoodsFeedImmersiveCardLampsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) IESECImmersiveProductCardViewModel *viewModel;
@property (retain, nonatomic) UITableView *mainTableView;
@property (retain, nonatomic) UILabel *prefixLabel;
@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) IESECGCDTimer *timer;
@property (copy, nonatomic) id /* block */ lampItemDisplayed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollToNextMessage;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)updateWithViewModel:(id)a0;

@end
