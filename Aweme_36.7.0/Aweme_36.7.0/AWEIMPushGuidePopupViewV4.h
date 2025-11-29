@class UIView, NSString, AWEIMPushGuideV4Selection, AWEIMPushGuideModelV4, AWEIMPushGuideFakeHeaderView, AWEIMShareModel, UIButton, UITableView, NSDictionary, UILabel;

@interface AWEIMPushGuidePopupViewV4 : AWEIMBasePopupView <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEIMPushGuideModelV4 *dataModel;
@property (retain, nonatomic) AWEIMShareModel *shareModel;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIView *tableFooterView;
@property (retain, nonatomic) UIView *tableHeaderView;
@property (retain, nonatomic) UILabel *topLabel;
@property (retain, nonatomic) AWEIMPushGuideFakeHeaderView *fakePushView;
@property (retain, nonatomic) AWEIMPushGuideV4Selection *currentSelectedOption;
@property (nonatomic) unsigned long long currentStyle;
@property (copy, nonatomic) NSDictionary *pushClickTrackInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isDisplaying;

- (void)__setupView;
- (void)__setupTableView;
- (void)hideWithDuration:(double)a0;
- (id)__trackParams;
- (id)initWithViewStyle:(unsigned long long)a0 infoModel:(id)a1;
- (id)initWithViewStyle:(unsigned long long)a0 infoModel:(id)a1 shareModel:(id)a2;
- (void)__trackOutAppNotifyGuideWithEventType:(id)a0 closeMethod:(id)a1;
- (void)__trackPushClick;
- (void)__setupTrackerEvents;
- (double)__tableViewHeight;
- (void)__createTableHeaderView;
- (void)__createTableFooterView;
- (void)__onClickConfirm;
- (void)__onClickCancel;
- (void)__updateFakePushView;
- (void)__updateFakePushViewWithFriendsTab;
- (void)__updateFakePushViewWithUnreadMessage;
- (void)__updateFakePushViewAfterShareIM;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)hide;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)show;

@end
