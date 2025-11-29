@interface BDMultiContentContainer.OverlayView : UIView <BDMultiContentContainer.StickerClickable> {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ delegate;
}

- (BOOL)shouldResponseToTap:(struct CGPoint { double x0; double x1; })a0 from:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;

@end
