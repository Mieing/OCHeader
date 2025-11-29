@class UIView, NSArray, UIStackView;
@protocol IESECShopComprehensiveExpendViewDelegate;

@interface IESECShopComprehensiveDropDownExpendView : UIView

@property (retain, nonatomic) UIStackView *expendStackView;
@property (retain, nonatomic) UIView *bgMaskView;
@property (nonatomic) BOOL isShow;
@property (weak, nonatomic) id<IESECShopComprehensiveExpendViewDelegate> delegate;
@property (retain, nonatomic) NSArray *subSortModels;

- (void)maskViewClickAction;
- (void)showWithAnimation:(id /* block */)a0;
- (void)setupExpendView;
- (void)updateWithSubSortModel:(id)a0;
- (void)hiddenWithAnimation:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)buttonClicked:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;

@end
