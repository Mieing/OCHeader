@class UIView, UIStackView;

@interface IESECMallSkeletonCellView : UIView

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIView *contextView;

- (void)configureBaseDimensionsWithModel:(id)a0;
- (void)configureStackViewWithModel:(id)a0;
- (void)configureContextViewWithModel:(id)a0;
- (void)setupAnimation:(id)a0;
- (void)applyCommonStylesToView:(id)a0 withModel:(id)a1;
- (void)setupSkeletonViewWith:(id)a0;
- (void).cxx_destruct;

@end
