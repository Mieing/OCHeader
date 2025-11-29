@class AWESearchPOIHotelFilterBaseItem;

@interface AWESearchPOIHotelFilterBaseComponent : UICollectionViewCell

@property (retain, nonatomic) AWESearchPOIHotelFilterBaseItem *itemView;

- (void)updateUIWithModel:(id)a0 selectedState:(BOOL)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
