@class NSString, AWEPostPageTableView, CAShapeLayer, NSArray, UILabel, UIView, UIButton;

@interface AWEStudioMissionViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UILabel *missionTitleLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) AWEPostPageTableView *tableView;
@property (retain, nonatomic) UIView *bgMaskView;
@property (retain, nonatomic) CAShapeLayer *contentShapeLayer;
@property (copy, nonatomic) NSArray *sourceData;
@property (copy, nonatomic) id /* block */ disAppearBlock;
@property (nonatomic) float contentHeight;
@property (retain, nonatomic) UIView *contentView;
@property (copy, nonatomic) id /* block */ selectCellBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackPageShow;
- (void)closeButtonClicked:(id)a0;
- (void)p_trackEvent:(id)a0 params:(id)a1;
- (void)updateSourceData:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)setupUI;

@end
