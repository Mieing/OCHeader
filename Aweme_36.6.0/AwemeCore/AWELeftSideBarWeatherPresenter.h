@class NSDictionary, AWELeftSideBarWeatherView, AWELeftSideBarWeatherModel;

@interface AWELeftSideBarWeatherPresenter : AWELeftSideBarBasePresenter

@property (retain, nonatomic) AWELeftSideBarWeatherView *weatherView;
@property (retain, nonatomic) NSDictionary *extraData;
@property (retain, nonatomic) AWELeftSideBarWeatherModel *model;
@property (nonatomic) BOOL isFirstAppear;

- (void)leftSideBarViewDynamicModuleRequestDataComplete:(id)a0 isCacheData:(BOOL)a1;
- (id)initWithContext:(id)a0 extraData:(id)a1;
- (void)leftSideBarPresenterOnReloadWithContext:(id)a0 extraData:(id)a1;
- (id)onCreateCellView;
- (double)cellViewHeight;
- (void)leftSideBarThemeDidChange:(long long)a0;
- (void)leftSideBarViewWillAppear;
- (void)trackClickEvent;
- (void).cxx_destruct;

@end
