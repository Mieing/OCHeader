@interface AWEStoryAnimatedNumberView : UIView <AWEStoryAnimatedNumberViewProtocol> {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ parentVC;
    void /* unknown type, empty encoding */ contentView;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (void)updateTextContent:(id)a0;
- (void)updateFont:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)updateColor:(id)a0;
- (id)initWithFont:(id)a0;

@end
