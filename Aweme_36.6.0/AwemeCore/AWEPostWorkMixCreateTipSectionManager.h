@class NSString, AWEPostWorkMixCreateTipSectionModel;

@interface AWEPostWorkMixCreateTipSectionManager : AWEUserWorkSectionManager <AWEPostWorkMixCreateTipSectionManagerProtocol>

@property (nonatomic) unsigned long long sectionState;
@property (retain, nonatomic) AWEPostWorkMixCreateTipSectionModel *sectionModel;
@property (copy, nonatomic) NSString *currentUserID;
@property (weak, nonatomic) id httpTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerViewDidAppear:(BOOL)a0;
- (void)updateViewModelData;
- (BOOL)shouldLoadRecommendMixTipData;
- (void)loadMixCreateTipData;
- (void)closeMixCreateRecommendTip;
- (void).cxx_destruct;
- (id)viewModel;
- (void)containerViewDidLoad;
- (double)sectionHeight;

@end
