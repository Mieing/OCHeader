@class WCTableViewManager, FinderLiveUserAttrUserSetting, MMFinderLiveTaskId;

@interface MMFinderLiveRecommandSettingSheet : MMPageSheetBaseView

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) WCTableViewManager *tableViewManager;
@property (copy, nonatomic) FinderLiveUserAttrUserSetting *userSetting;

+ (id)showWithTaskId:(id)a0;

- (id)initWithTaskId:(id)a0;
- (void)setupPageSheetConfig;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)configureUI;
- (void)configureOptionTableView;
- (void)addSettingSections;
- (void)addRecommendToFriendsSettingsSection;
- (void)addRecommendAeraSettingsSection;
- (id)genAllCityCell;
- (id)genSomeCityCell;
- (id)genSelectCityCellWithStr:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)openSelectCityInfo;
- (void)internalSetupAndOpenLiteAppVC:(id)a0;
- (void)updateDataOnSubmitPickCity:(id)a0 vc:(id)a1;
- (void)sendRecommendOption;
- (id)getCurrentLeftButton;
- (void)leftButtonAction;
- (void)rightButtonAction;
- (id)getCurrentRightButton;
- (double)tableViewWidth;
- (double)fixedHeight;
- (id)liveTask;
- (id)commonSelectIcon;
- (id)genUpdatedLiteAppQuery;
- (id)getTranslateRecommendCitiesMaxString;
- (id)cornerShapeWithSize:(struct CGSize { double x0; double x1; })a0 byRoundingCorners:(unsigned long long)a1;
- (id)headerViewWithTitle:(id)a0 height:(double)a1;
- (void).cxx_destruct;

@end
