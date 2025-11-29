@class UIButton, UILabel, AWEEcomAISearchResultNormalSearchHeaderModel;

@interface AWEEcomAISearchResultNormalSearchHeaderView : UIView

@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UILabel *queryLabel;
@property (retain, nonatomic) AWEEcomAISearchResultNormalSearchHeaderModel *model;
@property (copy, nonatomic) id /* block */ backButtonTapped;

- (void)onBackButtonTapped:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;
- (void)updateWithModel:(id)a0;

@end
