@class UIImageView, IESECLLView, UILabel, IESECTitleLabel;

@interface IESECShopAfterLiveCardProductView : UIView {
    IESECLLView *_informationContainerView;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) IESECTitleLabel *titleLabel;
@property (retain, nonatomic) UILabel *recommendLabel;

- (void)updateUIWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)configureSubviews;

@end
