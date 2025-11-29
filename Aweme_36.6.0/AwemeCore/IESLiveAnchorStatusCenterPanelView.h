@class UIView, NSString, HTSLiveScorllLabelView, NSArray, IESLiveAnchorPanelTabView, RealtimeSuggest, IESLiveButton, IESLiveImageView, IGListAdapter, UILabel, UICollectionView;

@interface IESLiveAnchorStatusCenterPanelView : UIView <IGListAdapterDataSource, IESLiveAnchorPanelTabViewDelegate>

@property (retain, nonatomic) UIView *topContainerView;
@property (retain, nonatomic) IESLiveAnchorPanelTabView *tabView;
@property (retain, nonatomic) IESLiveButton *closeButton;
@property (retain, nonatomic) UIView *contentContainerView;
@property (retain, nonatomic) UIView *loadingContentView;
@property (retain, nonatomic) UIView *bottomContainerView;
@property (retain, nonatomic) IESLiveImageView *suggestIconView;
@property (retain, nonatomic) UILabel *suggestLabel;
@property (retain, nonatomic) HTSLiveScorllLabelView *scrollSuggestLabel;
@property (retain, nonatomic) IESLiveImageView *expandIcon;
@property (retain, nonatomic) NSString *defaultSuggest;
@property (retain, nonatomic) NSString *defaultSuggestSchema;
@property (retain, nonatomic) NSString *currentSuggestSchema;
@property (retain, nonatomic) RealtimeSuggest *currentSuggest;
@property (nonatomic) long long currentSelectedIndex;
@property (nonatomic) long long lastSelectedIndex;
@property (copy, nonatomic) NSArray *sectionControllers;
@property (retain, nonatomic) IGListAdapter *adapter;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) id /* block */ hidePanelViewAction;
@property (copy, nonatomic) id /* block */ suggestClickBlock;
@property (copy, nonatomic) id /* block */ suggestShowBlock;
@property (copy, nonatomic) id /* block */ tabSelectBlock;
@property (retain, nonatomic) NSArray *tabModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)a0;
- (id)objectsForListAdapter:(id)a0;
- (id)listAdapter:(id)a0 sectionControllerForObject:(id)a1;
- (id)emptyViewForListAdapter:(id)a0;
- (void)setupBottomContainer;
- (void)setupTopContainer;
- (void)didSelectedTabIndex:(long long)a0 source:(long long)a1;
- (void)showPanelViewWithCompletion:(id /* block */)a0;
- (void)hidePanelViewWithCompletion:(id /* block */)a0;
- (void)updateWithTabModels:(id)a0 selectedIndex:(long long)a1 source:(long long)a2;
- (void)handleRealtimeSuggest:(id)a0;
- (void)handleRealtimeSuggestExpire:(id)a0;
- (void)bindingSectionController;
- (void)adaptAccessibility;
- (void)setupContentContainer;
- (void)setupLoadingContentView;
- (void)suggestViewTapped:(id)a0;
- (void)layoutBottomContainerWithoutIcon;
- (void)loadImageToIconView:(id)a0 iconView:(id)a1;
- (BOOL)suggestLabelShouldScrollWithContent:(id)a0;
- (void)layoutBottomContainerWithIcon:(BOOL)a0 content:(id)a1;
- (void)reloadSectionController;
- (BOOL)IsLynxToLynx:(long long)a0;
- (void)switchLynxViewWithTabKey:(id)a0;
- (void).cxx_destruct;
- (void)setupCollectionView;
- (void)setupUI;

@end
