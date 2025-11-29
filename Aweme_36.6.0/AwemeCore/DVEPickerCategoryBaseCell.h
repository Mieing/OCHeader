@protocol DVEPickerCategoryModel;

@interface DVEPickerCategoryBaseCell : UICollectionViewCell

@property (retain, nonatomic) id<DVEPickerCategoryModel> categoryModel;

- (void)categoryDidUpdate;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
