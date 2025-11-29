@interface WeChat.WSNativeHotListTableView : MMTableView {
    void /* unknown type, empty encoding */ onScrollableStateChanged;
    void /* unknown type, empty encoding */ isScrollableCached;
}

@property (nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentInset;

- (BOOL)touchesShouldCancelInContentView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
