@class IGListSectionController;

@interface IESECGoodsFeedBaseCell : UICollectionViewCell

@property (weak, nonatomic) id delegate;
@property (weak, nonatomic) IGListSectionController *sectionDelegate;

- (struct CGSize { double x0; double x1; })calculateCellSizeForContaineSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)updateWithViewModel:(id)a0;

@end
