@class UILabel, DUXRadioBox;

@interface AWEProfileChoiceBoxView : UIView

@property (retain, nonatomic) DUXRadioBox *box;
@property (retain, nonatomic) UILabel *label;

- (id)initWithBox:(id)a0 title:(id)a1;
- (void).cxx_destruct;
- (void)setup;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
