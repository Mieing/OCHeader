@class NSString, UICollectionView, MMUIButton, WCFinderMusicSelectViewInitParams;
@protocol WCFinderMusicSelectViewDelegate, WCFinderMusicSelectViewDataSource;

@interface WCFinderMusicSelectView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, WCVideoProducerMusicSearcherDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) MMUIButton *bgmButton;
@property (retain, nonatomic) MMUIButton *osButton;
@property (retain, nonatomic) MMUIButton *closeButton;
@property (nonatomic) unsigned long long currentIndex;
@property (retain, nonatomic) WCFinderMusicSelectViewInitParams *params;
@property (weak, nonatomic) id<WCFinderMusicSelectViewDelegate> delegate;
@property (weak, nonatomic) id<WCFinderMusicSelectViewDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 params:(id)a1;
- (void)commonInit;
- (void)setupViews;
- (void)layoutOptionButton:(id)a0;
- (void)resetIndex;
- (void)reloadData;
- (double)contentHeight;
- (BOOL)isBgmButtonSelected;
- (BOOL)isOstButtonSelected;
- (void)manualChangeOstButtonEnable:(BOOL)a0;
- (void)startAnimation;
- (void)stopAnimation;
- (void)scrollToIndex:(unsigned long long)a0;
- (id)getViewController;
- (void)onSearchBtnClick:(id)a0;
- (void)onClickCloseBtn:(id)a0;
- (void)onMusicOnOffBtnClick:(id)a0;
- (void)onOriginSoundOnOffBtnClick:(id)a0;
- (void)_setOriginSoundSelected:(BOOL)a0 triggerByAction:(BOOL)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)musicSearcherVC:(id)a0 didRequestSearchKey:(id)a1;
- (void)musicSearcherVC:(id)a0 didSelectMusic:(id)a1 atIndex:(id)a2;
- (void)musicSearcherVC:(id)a0 didCommitMusic:(id)a1;
- (void)musicSearcherVC:(id)a0 didCancelWithMusic:(id)a1;
- (void)musicSearcherVC:(id)a0 didRequestAudioModule:(BOOL)a1;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)getButton;
- (void)hideOSTButton;
- (void).cxx_destruct;

@end
