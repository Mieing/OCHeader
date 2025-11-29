@class UIButton, AWEEcomAISearchResultProductInquiryHeaderModel, AWEEcomAISearchResultProductInquiryHeaderContentView;

@interface AWEEcomAISearchResultProductInquiryHeaderView : UIView

@property (retain) AWEEcomAISearchResultProductInquiryHeaderContentView *contentView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) AWEEcomAISearchResultProductInquiryHeaderModel *model;
@property (copy, nonatomic) id /* block */ closeButtonTapped;
@property (copy, nonatomic) id /* block */ productTapped;

- (void)onCloseButtonTapped:(id)a0;
- (void)onProductMainPicViewTapped:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;
- (void)updateWithModel:(id)a0;

@end
