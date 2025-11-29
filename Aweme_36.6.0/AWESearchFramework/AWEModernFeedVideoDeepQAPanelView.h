@class CAGradientLayer, NSArray, NSString, AWEVideoDeepQAVideoTopView, AWEGradientView, UIView, UICollectionView;

@interface AWEModernFeedVideoDeepQAPanelView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) NSArray *dataArray;
@property (nonatomic) double videoInfoViewOffsetY;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (copy, nonatomic) NSString *path;
@property (retain, nonatomic) CAGradientLayer *bottomGradientMasklayer;
@property (retain, nonatomic) UIView *bottomGradientView;
@property (retain, nonatomic) AWEVideoDeepQAVideoTopView *topView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) long long selecteIndex;
@property (nonatomic) BOOL isExpand;
@property (retain, nonatomic) NSString *referString;
@property (copy, nonatomic) id /* block */ clickVideoAbstractSectionBlock;
@property (copy, nonatomic) id /* block */ triggerClosePaneEventBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollToSeletedIndex:(long long)a0;
- (void)updateWithModel:(id)a0 lottiePath:(id)a1;
- (void)triggerClosePaneEvent:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)layoutSubviews;

@end
