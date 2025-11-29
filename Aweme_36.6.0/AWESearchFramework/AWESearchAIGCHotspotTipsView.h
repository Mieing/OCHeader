@class UITableView, UIButton, UIImageView, NSString, UIView, UILabel, AWESearchAIGCHotspotTipsViewModel;
@protocol AWESearchAIGCHotspotTipsViewDelegate;

@interface AWESearchAIGCHotspotTipsView : UIView <UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate>

@property (weak, nonatomic) id<AWESearchAIGCHotspotTipsViewDelegate> delegate;
@property (retain, nonatomic) UITableView *hotspotListView;
@property (retain, nonatomic) AWESearchAIGCHotspotTipsViewModel *dataSource;
@property (retain, nonatomic) UIView *navigationBar;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) UIImageView *gradientImageView;
@property (retain, nonatomic) UIImageView *hotspotListViewGradientImageView;
@property (nonatomic) long long numberOfCellsToShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closeButtonClick;
- (void)reloadUIWithViewModel:(id)a0;
- (void)calculateNumberOfCellsToShow;
- (void)trackEvent:(id)a0 indexPath:(id)a1;
- (id)gradientImageWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithHotspotTipsViewDelegate:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)setupUI;

@end
