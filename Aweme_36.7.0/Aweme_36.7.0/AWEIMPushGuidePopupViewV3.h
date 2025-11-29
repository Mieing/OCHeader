@class UIView, NSString, AWEIMPushGuideSelection, UIImageView, AWEIMShareModel, UITableView, UIButton, AWEIMPushGuideFakePushView, NSDictionary, AWEIMPushGuideModelV3;

@interface AWEIMPushGuidePopupViewV3 : AWEIMBasePopupView <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEIMPushGuideModelV3 *dataModel;
@property (retain, nonatomic) AWEIMShareModel *shareModel;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIView *tableFooterView;
@property (retain, nonatomic) UIView *tableHeaderView;
@property (retain, nonatomic) AWEIMPushGuideFakePushView *fakePushView;
@property (retain, nonatomic) AWEIMPushGuideSelection *currentSelectedOption;
@property (nonatomic) unsigned long long currentStyle;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIImageView *titleIcon;
@property (copy, nonatomic) NSDictionary *pushClickTrackInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)trackPramsWithModel:(id)a0;
+ (BOOL)isDisplaying;

- (void)p_setupView;
- (void)hideWithDuration:(double)a0;
- (double)p_tableViewHeight;
- (void)p_createTableHeaderView;
- (void)p_createTableFooterView;
- (void)p_onClickCancel;
- (void)p_onClickConfirm;
- (id)__trackParams;
- (id)initWithViewStyle:(unsigned long long)a0 infoModel:(id)a1;
- (id)initWithViewStyle:(unsigned long long)a0 infoModel:(id)a1 shareModel:(id)a2;
- (void)p_setupTableView;
- (void)__trackOutAppNotifyGuideWithEventType:(id)a0 closeMethod:(id)a1;
- (void)__trackPushClick;
- (void)__updateFakeViewWithModel:(id)a0;
- (id)createSectionTitleLabel;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)hide;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)show;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;

@end
