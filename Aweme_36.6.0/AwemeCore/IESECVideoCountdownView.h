@class UILabel, IESECButton, UIStackView;

@interface IESECVideoCountdownView : UIView

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UILabel *prefixLabel;
@property (retain, nonatomic) IESECButton *dayButton;
@property (retain, nonatomic) UILabel *dayLabel;
@property (retain, nonatomic) IESECButton *hourButton;
@property (retain, nonatomic) IESECButton *minButton;
@property (retain, nonatomic) IESECButton *secondButton;

- (id)createTimeButton;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateWithViewModel:(id)a0;
- (id)createLabelWithText:(id)a0;

@end
