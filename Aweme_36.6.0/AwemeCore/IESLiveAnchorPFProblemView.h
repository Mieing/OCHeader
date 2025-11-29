@class UIButton, UITableView, NSString, UILabel, NSMutableArray, UIView;

@interface IESLiveAnchorPFProblemView : UIView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) NSMutableArray *problems;
@property (retain, nonatomic) UIView *topContainerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UITableView *tableView;
@property (copy, nonatomic) id /* block */ onLeftBackDidTapped;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 problems:(id)a1;
- (void)backButtonDidTapped;
- (void)reloadData;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)setupUI;
- (void)setupLayout;

@end
