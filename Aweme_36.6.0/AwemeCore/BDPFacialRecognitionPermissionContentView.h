@class BDPTextView, UILabel, BDPCheckBox, UIView;

@interface BDPFacialRecognitionPermissionContentView : UIView {
    UIView *_separator;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) BDPCheckBox *checkBox;
@property (retain, nonatomic) BDPTextView *agreementTextView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupUI;

@end
