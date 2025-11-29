@class NSString, InteractionData, UICollectionView, NSArray, UILabel, UIView, UICollectionViewDiffableDataSource;
@protocol WCFinderHalfProfileInteractionInfoViewDelegate;

@interface WCFinderHalfProfileInteractionInfoView : UIView <UICollectionViewDelegate>

@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) InteractionData *interactionData;
@property (copy, nonatomic) NSArray *configurations;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource;
@property (weak, nonatomic) id<WCFinderHalfProfileInteractionInfoViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupUI;
- (void)_setupLayout;
- (void)updateWithInteractionData:(id)a0;
- (void)_updateUI;
- (void)_updateLayout;
- (void)_didTapContentViewWithConfiguration:(id)a0;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
