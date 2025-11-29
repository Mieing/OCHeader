@class UIView, CJPayResultPageGuideInfoModel, UIImageView, BDImageView, CJPayPayAgainDiscountView, CJPayCommonProtocolView, CJPayStandardButton, UILabel;

@interface CJPayResultFigureGuideView : UIView

@property (retain, nonatomic) CJPayResultPageGuideInfoModel *model;
@property (nonatomic) BOOL showBackView;
@property (retain, nonatomic) UIView *backView;
@property (retain, nonatomic) CJPayPayAgainDiscountView *bubbleView;
@property (retain, nonatomic) BDImageView *imageView;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ protocolClickBlock;
@property (retain, nonatomic) UILabel *mainGuideLabel;
@property (retain, nonatomic) UILabel *subGuideLabel;
@property (retain, nonatomic) UIImageView *guideFigure;
@property (retain, nonatomic) CJPayStandardButton *confirmButton;
@property (retain, nonatomic) CJPayCommonProtocolView *protocolView;
@property (retain, nonatomic) UIImageView *iconImage;
@property (retain, nonatomic) UILabel *voucherAmountLabel;
@property (retain, nonatomic) UIImageView *flickView;

- (void)confirmButtonClick;
- (id)p_stringSeparatedWithDollar:(id)a0;
- (id)initWithGuideInfoModel:(id)a0;
- (BOOL)p_isGifImg;
- (id)initWithGuideInfoModel:(id)a0 showBackView:(BOOL)a1;
- (BOOL)p_shouldShowProtocolView;
- (id)p_voucherAmountString;
- (void)confirmButtonAnimation;
- (void).cxx_destruct;
- (void)setupUI;

@end
