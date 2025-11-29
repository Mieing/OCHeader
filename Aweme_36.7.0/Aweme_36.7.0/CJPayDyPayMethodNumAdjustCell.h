@class UIImageView, UIImage, UILabel, UIView;

@interface CJPayDyPayMethodNumAdjustCell : CJPayStyleBaseListCellView

@property (retain, nonatomic) UIView *backView;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIImage *payMethodFoldImage;
@property (retain, nonatomic) UIImage *payMethodUnFoldImage;

- (void)bindViewModel:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;
- (void)didSelect;

@end
