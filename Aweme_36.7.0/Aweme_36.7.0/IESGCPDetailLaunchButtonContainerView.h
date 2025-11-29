@class UIStackView, NSString, IESGCPTimer, IESGCPImageButton, UILabel;

@interface IESGCPDetailLaunchButtonContainerView : UIView

@property (retain, nonatomic) IESGCPImageButton *button;
@property (retain, nonatomic) IESGCPTimer *textAnimationTimer;
@property (nonatomic) long long animationIndex;
@property (retain, nonatomic) NSString *originText;
@property (retain, nonatomic) NSString *additionalText;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UILabel *firstTextLabel;
@property (retain, nonatomic) UILabel *subTextLabel;
@property (retain, nonatomic) UIStackView *labelStackView;
@property (copy, nonatomic) id /* block */ buttonClickedBlock;

- (void)buttonClicked;
- (void)updateButtonTitle:(id)a0;
- (void)updateButtonWithConfig:(id)a0;
- (void)replaceButtonText:(double)a0;
- (void)updateButtonTextLayout;
- (void)increaseLabelCharacters;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)layoutUI;

@end
