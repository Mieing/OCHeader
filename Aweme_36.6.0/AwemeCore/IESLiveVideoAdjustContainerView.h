@class IESLiveVideoAdjustPanelView, UICollectionView, NSString, UIView, NSIndexPath, IESLiveWebpLoadingView;
@protocol IESLiveVideoAdjustViewDelegate;

@interface IESLiveVideoAdjustContainerView : UIView <IESLiveVideoAdjustPanelViewDataSource, IESLiveVideoAdjustPanelViewDelegate>

@property (retain, nonatomic) IESLiveWebpLoadingView *loadingView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) IESLiveVideoAdjustPanelView *panelView;
@property (weak, nonatomic) id<IESLiveVideoAdjustViewDelegate> delegate;
@property (nonatomic) long long selectCategory;
@property (retain, nonatomic) NSIndexPath *selectIndexPath;
@property (nonatomic) BOOL isDataUpdated;
@property (readonly, nonatomic) UICollectionView *categoryCollectionView;
@property (readonly, nonatomic) UICollectionView *contentCollectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPanelShowing;
- (void)configSubviews;
- (void)showPanelView;
- (long long)selectCategoryIndex;
- (void)configLoadingView;
- (void)reloadPanelData;
- (void)removePanelView;
- (long long)numberOfItemsInCollectionView:(id)a0;
- (id)panelView:(id)a0 categoryAtIndex:(long long)a1;
- (void)panelView:(id)a0 didSelectCategoryAtIndex:(long long)a1;
- (void)configEffectPanelView;
- (void)panelView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)panelView:(id)a0 didChangeValue:(long long)a1 forItem:(id)a2;
- (void)panelView:(id)a0 didFinishValueChange:(long long)a1 forItem:(id)a2;
- (void)panelView:(id)a0 didSelectLevelIndex:(unsigned long long)a1 forItem:(id)a2;
- (void)panelView:(id)a0 resetButtonClickedWithItemList:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)startLoading;
- (void)stopLoading;
- (void)layoutSubviews;
- (void)configContainerView;

@end
