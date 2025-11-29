@class UILabel, UIImage;

@interface IESECGoodsFeedIndemnificationView : UIView {
    UILabel *_label;
    UIImage *_dividerImage;
    UILabel *_pleasureLabel;
}

@property (nonatomic) BOOL isConstraintLength;

- (void)updateUIWithParamters:(id)a0;
- (id)saleInformationRightForTrackingWithParams:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (id)divider;
- (id)dividerImage;

@end
