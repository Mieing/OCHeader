@class AWEAwemeModel, UIView, NSString, AWELandscapePlaybackSettingView, AWELandscapeMorePanelViewModel, DUXSwitch, UICollectionView, AWELandscapePageContext, UILabel;
@protocol AWELandscapeMorePanelViewDelegate;

@interface AWELandscapeMorePanelView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, AWELandscapeMorePanelViewProtocol>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWELandscapeMorePanelViewModel *viewModel;
@property (retain, nonatomic) AWELandscapePageContext *pageContext;
@property (retain, nonatomic) UIView *dismissView;
@property (retain, nonatomic) UIView *panelContainer;
@property (retain, nonatomic) UIView *effectView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *splitLine;
@property (retain, nonatomic) UILabel *skipSwitchTitleLabel;
@property (retain, nonatomic) UILabel *skipSwitchSubTitleLabel;
@property (retain, nonatomic) DUXSwitch *skipSwitch;
@property (retain, nonatomic) AWELandscapePlaybackSettingView *playbackSettingView;
@property (weak, nonatomic) id<AWELandscapeMorePanelViewDelegate> interactionDelegate;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ switchBlock;
@property (copy, nonatomic) id /* block */ landScapeStartTimestampBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithModel:(id)a0 pageContext:(id)a1;
- (void)dismissMorePanelWithCompletion:(id /* block */)a0;
- (void)showMorePanelOnView:(id)a0 completion:(id /* block */)a1;
- (double)panelViewWidth;
- (void)trackWatchLaterAddShowIfNeeded;
- (void)handleClickDismissView:(id)a0;
- (void)trackSkipSwitchClick:(BOOL)a0;
- (void)trackPlaybackSettingChangeFrom:(id)a0 to:(id)a1;
- (void)trackPlaybackSettingChanged:(id)a0;
- (BOOL)longVideoSkipOpeningEndingEnable;
- (void)setupUIForSwitchButtonWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)setupUIForPlaybackSettingWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)setupDefaultUIWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)setupUI;
- (struct CGSize { double x0; double x1; })collectionViewSize;

@end
