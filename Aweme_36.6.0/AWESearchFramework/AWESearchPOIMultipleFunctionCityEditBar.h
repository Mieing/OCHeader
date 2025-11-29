@class AWESearchPOIBarConfigModel, UIView;

@interface AWESearchPOIMultipleFunctionCityEditBar : UIView

@property (retain, nonatomic) AWESearchPOIBarConfigModel *model;
@property (weak, nonatomic) UIView *rightButtonBorderView;
@property (copy, nonatomic) id /* block */ rightButtonDidTapBlock;

- (void)rightButtonDidTap:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;

@end
