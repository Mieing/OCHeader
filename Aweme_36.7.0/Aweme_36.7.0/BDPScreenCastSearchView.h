@class UIView, NSString, NSArray, UIButton, UITableView, BDPScreenCastLoadingView, UILabel, BDPScreenCastBlankView;

@interface BDPScreenCastSearchView : UIView <UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *timorMaskView;
@property (retain, nonatomic) BDPScreenCastLoadingView *loadingView;
@property (retain, nonatomic) BDPScreenCastBlankView *blankView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *topBar;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *helpButton;
@property (copy, nonatomic) NSArray *deviceList;
@property (nonatomic) long long selectedIndex;
@property (nonatomic, getter=isFullScreen) BOOL fullScreen;
@property (nonatomic) BOOL isShowing;
@property (copy, nonatomic) id /* block */ selectedDeviceBlock;
@property (copy, nonatomic) id /* block */ exitBlock;
@property (copy, nonatomic) id /* block */ helpBtnClickBlock;
@property (nonatomic) unsigned long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closeWithAnimated:(BOOL)a0;
- (id)initWithFullScreen:(BOOL)a0;
- (void)showWithAnimated:(BOOL)a0;
- (void)setStatus:(unsigned long long)a0 deviceList:(id)a1;
- (void)backgroundClicked;
- (id)createLayerWithFullScreen:(BOOL)a0;
- (void)helpButtonClicked;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)setupUI;

@end
