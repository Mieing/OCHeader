@class CJPayMethodCellTagView, CJPayChannelBizModel, UIImageView, CJPayStyleCheckMark, UILabel;

@interface CJPaySuggestAddCardItemView : UIView

@property (retain, nonatomic) UIImageView *iconImgView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) CJPayMethodCellTagView *discountView;
@property (retain, nonatomic) CJPayMethodCellTagView *discountView2;
@property (retain, nonatomic) CJPayChannelBizModel *bizModel;
@property (retain, nonatomic) CJPayStyleCheckMark *confirmImageView;

- (void)p_updateUI;
- (id)initWithBizModel:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;

@end
