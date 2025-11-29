@class NSNumber, MMUILabel, NSString;

@interface VoicePrintDigitView : UIView

@property (retain, nonatomic) MMUILabel *digitsLabel;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic, getter=isDigitsAlone) NSNumber *digitsAlone;
@property (retain, nonatomic) NSString *digits;
@property (retain, nonatomic) NSString *title;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateTitleSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
