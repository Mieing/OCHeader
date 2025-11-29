@class IESLiveWebpLoadingView, NSString, IESLiveAnchorMultiLinkParticipationViewModel, UIView, IESLiveTableViewCellDisplayTrackHelper, UITableView;
@protocol IESHYContainerProtocol;

@interface IESLiveMultiLinkerActiveInviteViewController : IESLiveRevenueInteractPopupViewController <UITableViewDelegate, UITableViewDataSource, IESHYHybridViewLifecycleProtocol, IESLiveTableViewCellDisplayTrackHelperDelegate>

@property (nonatomic) double lynxHeight;
@property (copy, nonatomic) NSString *schemaUrl;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridTopBanner;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) IESLiveWebpLoadingView *loadingView;
@property (retain, nonatomic) IESLiveTableViewCellDisplayTrackHelper *tableViewTrackHelper;
@property (nonatomic) int modType;
@property (weak, nonatomic) IESLiveAnchorMultiLinkParticipationViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindAction;
- (long long)sectionForGroupType:(int)a0;
- (BOOL)trackDisplayedCellWithIndexPath:(id)a0;
- (id)initWithDIContext:(id)a0 schemaUrl:(id)a1 lynxHeight:(double)a2;
- (void)dismiss;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)setupSubviews;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;

@end
