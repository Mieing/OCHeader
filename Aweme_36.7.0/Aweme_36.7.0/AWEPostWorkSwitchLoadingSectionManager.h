@class AWEPostWorkSwitchLoadingSectionModel, NSString;

@interface AWEPostWorkSwitchLoadingSectionManager : AWEUserWorkSectionManager <AWEPostWorkSwitchLoadingSectionManagerProtocol>

@property (retain, nonatomic) AWEPostWorkSwitchLoadingSectionModel *loadingModel;
@property (nonatomic) double startSortTimestamp;
@property (readonly, nonatomic) unsigned long long sectionState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)packUpSortLoadingViewWithAnimated:(BOOL)a0;
- (double)showSortLoadingViewWithSortType:(unsigned long long)a0 animated:(BOOL)a1;
- (void)changeLoadingViewStateWithSortType:(unsigned long long)a0 timestamp:(double)a1;
- (void).cxx_destruct;
- (id)viewModel;
- (void)containerViewDidLoad;
- (double)sectionHeight;

@end
