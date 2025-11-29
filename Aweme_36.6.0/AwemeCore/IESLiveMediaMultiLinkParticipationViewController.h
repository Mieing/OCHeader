@class IESLiveMediaLinkParticipationViewModel, NSString, UIView, UILabel, UITableView;
@protocol IESLiveScrollRefreshService, IESLivePerfSampler;

@interface IESLiveMediaMultiLinkParticipationViewController : IESLiveCommunityInteractPopupViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) IESLiveMediaLinkParticipationViewModel *viewModel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentFrame;
@property (retain, nonatomic) UIView *topPanelContainerView;
@property (retain, nonatomic) UILabel *noFolloweeTipLabel;
@property (retain, nonatomic) UITableView *playerListView;
@property (retain, nonatomic) id<IESLiveScrollRefreshService> scrollRefreshService;
@property (retain, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (nonatomic) double appearTime;
@property (nonatomic) BOOL viewdidLoaded;
@property (nonatomic) BOOL visiable;
@property (nonatomic) BOOL forceRefresh;
@property (nonatomic) BOOL activityListShown;
@property (retain, nonatomic) UILabel *noRivalHintLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupViews;
- (void)setupContentViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)p_setupBindings;
- (void)onSetupNavBar:(id)a0;
- (id)p_alogDescFromInteractUserList:(id)a0;
- (void)p_refreshDataSource;
- (void)p_showFloatHintViewIfNeeded;
- (void)p_layoutHintLabelIfNeed;
- (id)p_makeSectionHeaderViewWithTitle:(id)a0;
- (void)showAndRefreshDataSource;
- (long long)sectionForGroupType:(int)a0;
- (BOOL)trackDisplayedCellWithIndexPath:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;

@end
