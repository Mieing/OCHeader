@class IESECServiceProxy, NSMutableArray, IESECWinFilterObject;
@protocol IESECWinCategoryService;

@interface IESECWinFilterCell : UICollectionViewCell

@property (retain, nonatomic) IESECServiceProxy<IESECWinCategoryService> *categoryService;
@property (retain, nonatomic) NSMutableArray *btns;
@property (retain, nonatomic) IESECWinFilterObject *object;

+ (struct CGSize { double x0; double x1; })cellSizeWithContentWidth:(double)a0;

- (void)didClick:(id)a0;
- (void)bindObject:(id)a0;
- (id)buildTitleWithModel:(id)a0 isSelected:(BOOL)a1;
- (void)trackWithEventName:(id)a0 model:(id)a1 once:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
