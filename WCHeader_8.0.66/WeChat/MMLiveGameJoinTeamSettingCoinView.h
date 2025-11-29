@class UIView, NSString, MMFinderLiveTask, MMLiveGameJoinTeamSettingCoinValueView, MMFinderLiveTaskId, NSMutableArray, MMUILabel, MMTableView, MMUIButton;
@protocol MMLiveGameJoinTeamSettingViewDelegate;

@interface MMLiveGameJoinTeamSettingCoinView : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource, MMLiveGameJoinTeamSettingCoinValueViewDelegate>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *topAreaView;
@property (retain, nonatomic) MMUIButton *leftButton;
@property (retain, nonatomic) MMUIButton *rightButton;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMTableView *tableView;
@property (readonly, nonatomic) MMFinderLiveTask *liveTask;
@property (retain, nonatomic) MMLiveGameJoinTeamSettingCoinValueView *settingCoinValueView;
@property (retain, nonatomic) NSMutableArray *coinValues;
@property (weak, nonatomic) id<MMLiveGameJoinTeamSettingViewDelegate> operationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 taskId:(id)a1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)setExtraCellLineHidden:(id)a0;
- (void)leftButtonAction;
- (void)rightButtonAction;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)onViewDismissed:(BOOL)a0;
- (double)parentHeight;
- (void).cxx_destruct;

@end
