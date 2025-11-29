@class CAGradientLayer, NSString, UICollectionView, UICollectionViewFlowLayout;
@protocol WCStoryPreviewContactIndicatorViewDataSource, WCStoryPreviewContactIndicatorViewDelegate;

@interface WCStoryPreviewContactIndicatorView : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource> {
    UICollectionViewFlowLayout *m_collectionLayout;
    UICollectionView *m_collectionView;
    CAGradientLayer *m_gradientLayer;
}

@property (weak, nonatomic) id<WCStoryPreviewContactIndicatorViewDataSource> dataSource;
@property (weak, nonatomic) id<WCStoryPreviewContactIndicatorViewDelegate> delegate;
@property (nonatomic) double gradientMaskHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForWidth:(double)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configCollectionView;
- (void)updateOffset:(double)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
