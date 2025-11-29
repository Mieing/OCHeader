@class IESLiveAnnouncementPromptView, NSString, IESLiveAnnouncementContext, UICollectionView, UIView, IGListAdapter, UIButton;

@interface IESLiveAnnouncementListView : IESLiveAnnouncementPageView <IGListAdapterDataSource, IESLiveAnnouncementDataUpdateReaction>

@property (retain, nonatomic) IESLiveAnnouncementContext *context;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *emptyView;
@property (retain, nonatomic) IGListAdapter *listAdapter;
@property (retain, nonatomic) UIButton *createButton;
@property (retain, nonatomic) UIButton *linkButton;
@property (retain, nonatomic) IESLiveAnnouncementPromptView *promptView;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)popupItemType;

- (void)hideIfNeeded;
- (id)objectsForListAdapter:(id)a0;
- (id)listAdapter:(id)a0 sectionControllerForObject:(id)a1;
- (id)emptyViewForListAdapter:(id)a0;
- (void)reloadListDataWithCompletion:(id /* block */)a0;
- (id)createButtons;
- (id)titleForNavBar;
- (id)rightActionsForNavBar;
- (id)leftActionsForNavBar;
- (void)onAnnouncementsFetchedInEditPanel;
- (void)updateLinkButtonWithEnabled:(BOOL)a0;
- (void)reloadWithOutListData;
- (void)createDidTapped;
- (void)updateCreateButton;
- (void)linkDidTapped;
- (void)updateLinkButton;
- (void)updateCenterContent;
- (void)executeCompletionBlockWithModel:(id)a0;
- (void)trackListClickWithModel:(id)a0 buttonType:(id)a1;
- (void)promptViewDidTapped;
- (void)onAnnouncementDataUpdate:(long long)a0;
- (void).cxx_destruct;
- (void)show;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(id)a1;
- (void)setupUI;
- (void)setupData;
- (void)hideWithCompletion:(id /* block */)a0;
- (void)setupLayout;

@end
