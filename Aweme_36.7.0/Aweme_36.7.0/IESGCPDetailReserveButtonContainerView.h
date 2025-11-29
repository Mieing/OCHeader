@class UIButton, UILabel, UIStackView;

@interface IESGCPDetailReserveButtonContainerView : UIView

@property (retain, nonatomic) UIButton *reserveButton;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UILabel *subTextLabel;
@property (retain, nonatomic) UIStackView *labelStackView;
@property (nonatomic) BOOL isReserved;
@property (nonatomic) BOOL isGameOnlined;
@property (nonatomic) unsigned long long buttonState;
@property (nonatomic) BOOL isChangingState;
@property (copy, nonatomic) id /* block */ reserveButtonClickedBlock;

- (void)updateButtonStyleWithThemeConfig:(id)a0;
- (void)makeTrackNode;
- (void)reserveButtonDidClicked;
- (void)updateButtonState:(unsigned long long)a0 themeConfig:(id)a1;
- (void)manualReportShowTracker;
- (void)layoutViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupViews;

@end
