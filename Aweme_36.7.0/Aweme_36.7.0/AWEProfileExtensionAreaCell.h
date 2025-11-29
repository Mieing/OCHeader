@class AWEProfileExtensionAreaCellViewModel, UIView;

@interface AWEProfileExtensionAreaCell : UICollectionViewCell

@property (retain, nonatomic) UIView *cardView;
@property (retain, nonatomic) AWEProfileExtensionAreaCellViewModel *cellViewModel;

- (void)addCardView:(id)a0;
- (void)generalAddCardView:(id)a0;
- (void)addCardView:(id)a0 cardSize:(struct CGSize { double x0; double x1; })a1 alignmentStyle:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
