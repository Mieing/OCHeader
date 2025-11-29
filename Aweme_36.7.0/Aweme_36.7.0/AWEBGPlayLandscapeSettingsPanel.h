@class UITapGestureRecognizer, AWELandscapePageContext, AWEBGPlayLandscapeSettingsViewModel, AWEAwemeModel, UIView, NSString, UITableView;
@protocol AWELandscapeMorePanelViewDelegate;

@interface AWEBGPlayLandscapeSettingsPanel : UIView <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate, AWEBGPlayLandscapeTableViewDelegate>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *effectView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWELandscapePageContext *pageContext;
@property (retain, nonatomic) AWEBGPlayLandscapeSettingsViewModel *viewModel;
@property (weak, nonatomic) id<AWELandscapeMorePanelViewDelegate> interactionDelegate;
@property (nonatomic) long long panelStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowWithAwemeModel:(id)a0;
+ (void)showOnView:(id)a0 model:(id)a1 pageContext:(id)a2 interactionDelegate:(id)a3 panelStyle:(long long)a4;
+ (void)showOnView:(id)a0 model:(id)a1 pageContext:(id)a2 interactionDelegate:(id)a3;
+ (id)switchStateWithPanelStyle:(long long)a0;

- (void)showPanel;
- (id)initWithModel:(id)a0 pageContext:(id)a1 panelStyle:(long long)a2;
- (void)dismissPanel;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)setupUI;
- (void)reloadSection:(long long)a0;

@end
