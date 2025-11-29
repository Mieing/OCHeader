@class BDRTextLayoutWrapper;

@interface BDRTextViewWrapper : UIView {
    BOOL _debug;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _contentRect;
}

@property (retain, nonatomic) BDRTextLayoutWrapper *textLayout;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectWithLineIndex:(unsigned long long)a0;
- (void)setDebug:(BOOL)a0 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
