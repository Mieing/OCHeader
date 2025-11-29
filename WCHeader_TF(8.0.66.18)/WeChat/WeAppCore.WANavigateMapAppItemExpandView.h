@interface WeAppCore.WANavigateMapAppItemExpandView : UIView {
    void /* unknown type, empty encoding */ kItemViewHeight;
    void /* unknown type, empty encoding */ kExpandButtonPadding;
    void /* unknown type, empty encoding */ labelText;
    void /* unknown type, empty encoding */ onExpandClicked;
    void /* unknown type, empty encoding */ $__lazy_storage_$_expandButton;
}

@property (nonatomic, copy) id /* block */ onExpandClicked;

- (id)initWithLabelText:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)onExpandButtonClicked;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
