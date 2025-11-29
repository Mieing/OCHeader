@class AWEAdvanceSettingActionDataController, NSString, AFDModalViewHelper, UILabel, UIView, UITableView;

@interface AWEAdvanceSettingActionViewController : UIViewController <AWEPanelTransitionWithBackground, AWEAdvanceSettingActionCellDelegate, AWEAdvanceSettingActionDataControllerDelegate, UITableViewDelegate, UITableViewDataSource, AWEAdvanceSettingActionViewControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AFDModalViewHelper *helper;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *navigationView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIView *bar;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEAdvanceSettingActionDataController *dataController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ confirmDuetPermissonBlock;
@property (copy, nonatomic) id /* block */ confirmCommentPermissonBlock;
@property (copy, nonatomic) id /* block */ confirmCommentProtectionModeBlock;
@property (copy, nonatomic) id /* block */ confirmDanmakuPermissonBlock;

- (BOOL)wantsDimmingTransitionBackground;
- (void)transitionBackgroundViewTapped:(id)a0;
- (void)p_setupViews;
- (id)initWithDataController:(id)a0;
- (void)dismissHalfScreen;
- (void)updateCommentProtectionModeWithSelectedIndexPath:(id)a0;
- (void)updateCommentAllowedStateWithSelectedIndexPath:(id)a0;
- (void)updateCommentAllowedStateBeforePublishWithSelectedIndexPath:(id)a0;
- (void)updateDanmakuAllowedStateWithSelectedIndexPath:(id)a0;
- (void)updateDanmakuAllowedStateBeforePublishWithSelectedIndexPath:(id)a0;
- (void)updateDuetAllowedStateWithSelectedIndexPath:(id)a0;
- (void)dismissCurrentViewControllerWithCompletion:(id /* block */)a0;
- (double)navigationViewH;
- (void)registerTableViewCellReuse;
- (id)identifierForCardUIStyleWithOriginalID:(id)a0;
- (void)dismissHalfScreenWithChildVC;
- (double)contentHeight;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (double)tableViewHeight;
- (double)bottomOffset;

@end
