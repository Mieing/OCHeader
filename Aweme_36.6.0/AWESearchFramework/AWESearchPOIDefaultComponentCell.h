@protocol AWESearchPOIDefaultCellDelegate;

@interface AWESearchPOIDefaultComponentCell : AWEMerchandiseComponentBaseCell

@property (weak, nonatomic) id<AWESearchPOIDefaultCellDelegate> poiDefaultCellDelegate;

+ (id)identifier;

- (void)configWithComponentModel:(id)a0 filterManager:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
