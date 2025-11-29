@class CAGradientLayer, IESGCPDetailFilterConfig, UICollectionView, NSArray, UICollectionViewFlowLayout, UIView, NSString;
@protocol IESGCPDetailFilterViewDelegate;

@interface IESGCPDetailFilterView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout;
@property (retain, nonatomic) IESGCPDetailFilterConfig *filterConfig;
@property (copy, nonatomic) NSArray *words;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIView *separatorLineView;
@property (nonatomic) BOOL showSeparatorLine;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly, nonatomic) long long selectedIndex;
@property (weak, nonatomic) id<IESGCPDetailFilterViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithWords:(id)a0 selectedIndex:(long long)a1;
- (void)setupWithFilterConfig:(id)a0;
- (void)updateWithSelectedIndex:(long long)a0;
- (void)layoutWithFilterConfig:(id)a0;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (id)cellForItemAtIndexPath:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)deselectItemAtIndexPath:(id)a0 animated:(BOOL)a1;
- (void)setupView;

@end
