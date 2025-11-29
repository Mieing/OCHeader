@class MMTableView, OrderedDictionary, NSString, MMFinderLiveTaskId, UIView, MMUIButton, MMUILabel;
@protocol MMLiveRewardQuotaSettingViewDelegate;

@interface MMLiveRewardQuotaSettingView : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMUIButton *backButton;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMTableView *rewardQuotaOptionTableView;
@property (retain, nonatomic) OrderedDictionary *rewardQuotaOptions;
@property (nonatomic) unsigned int curRewardQuota;
@property (weak, nonatomic) id<MMLiveRewardQuotaSettingViewDelegate> operationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 curRewardQuota:(unsigned int)a1;
- (void)dealloc;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)initDefaultData;
- (void)initUI;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)liveTask;
- (double)contentViewHeight;
- (void)setExtraCellLineHidden:(id)a0;
- (void)showWithAnimated:(BOOL)a0;
- (void)dismissWithAnimated:(BOOL)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)backAction;
- (void).cxx_destruct;

@end
