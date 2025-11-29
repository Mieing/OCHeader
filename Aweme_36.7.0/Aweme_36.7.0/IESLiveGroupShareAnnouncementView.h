@class UITableView, NSString, IESLiveAnnouncementContext, NSNumber, UIButton;

@interface IESLiveGroupShareAnnouncementView : IESLiveAnnouncementPageView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) IESLiveAnnouncementContext *context;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (retain, nonatomic) UIButton *shareButton;
@property (retain, nonatomic) UITableView *tableView;
@property (copy, nonatomic) NSNumber *groupId;
@property (copy, nonatomic) NSString *source;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)popupItemType;

- (void)updateShareButton;
- (id)createButtons;
- (id)titleForNavBar;
- (id)rightActionsForNavBar;
- (id)leftActionsForNavBar;
- (void)shareButtonDidTapped;
- (id)getSelectedAnnouncementIds;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)show;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(id)a1;
- (void)setupUI;
- (void)hideWithCompletion:(id /* block */)a0;
- (void)setupLayout;

@end
