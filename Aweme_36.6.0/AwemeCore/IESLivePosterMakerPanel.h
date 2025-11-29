@class IESLiveWebpLoadingView, UIView, NSString, IESLiveNormalActionView, UIButton, IESLiveVSPosterStore, UICollectionView, IESLiveImageView, UILabel, NSIndexPath;

@interface IESLivePosterMakerPanel : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) IESLiveVSPosterStore *store;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) UIView *authInfoView;
@property (retain, nonatomic) IESLiveNormalActionView *leftAction;
@property (retain, nonatomic) IESLiveNormalActionView *rightAction;
@property (retain, nonatomic) IESLiveWebpLoadingView *loadingView;
@property (retain, nonatomic) UIView *templatesView;
@property (retain, nonatomic) UIView *preView;
@property (retain, nonatomic) UICollectionView *templatesCollectionView;
@property (retain, nonatomic) NSIndexPath *selectedIndex;
@property (nonatomic) BOOL hasSet;
@property (retain, nonatomic) UILabel *authLabel;
@property (retain, nonatomic) IESLiveImageView *authIcon;
@property (retain, nonatomic) IESLiveImageView *posterPreView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originFrame;
@property (nonatomic) unsigned long long status;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (copy, nonatomic) id /* block */ leftBlock;
@property (copy, nonatomic) id /* block */ rightBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closePanel;
- (void)updateAuthorName:(id)a0;
- (void)updateWithStatus;
- (void)layoutTemplateSelectStatus;
- (void)layoutPreviewStatus;
- (void)layoutBGView;
- (id)createAuthInfoView;
- (void)tapPreView;
- (void)p_autoSelectCellWithScrollView:(id)a0;
- (void)updatePreViewImage;
- (void)showPreView;
- (void)setupSubViews;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithStore:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (struct CGSize { double x0; double x1; })cellSize;

@end
