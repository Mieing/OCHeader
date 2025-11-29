@class UIButton, UILabel;

@interface PickerToolBar : MMUIView

@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (nonatomic) BOOL autoExpandWithText;

- (id)init;
- (void)createViews;
- (void)setText:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
