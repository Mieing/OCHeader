@class UILabel, UIImageView;

@interface CJPayUnifyPayMethodSeparatorFoldCell : CJPayStyleBaseListCellView

@property (retain, nonatomic) UILabel *preLabel;
@property (retain, nonatomic) UILabel *tailLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;

- (void)bindViewModel:(id)a0;
- (id)p_createIconImageViewWithUrl:(id)a0;
- (void).cxx_destruct;
- (void)didSelect;

@end
