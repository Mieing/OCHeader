@class UIButton, UILabel, UIView;

@interface EditImageDeleteBarView : MMUIView {
    UIView *_line;
}

@property (retain, nonatomic) UIButton *_deleteBtn;
@property (retain, nonatomic) UILabel *_tipLabel;
@property (nonatomic) BOOL _isSelected;
@property (nonatomic) unsigned long long editImageUIStyle;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reloadButton;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
