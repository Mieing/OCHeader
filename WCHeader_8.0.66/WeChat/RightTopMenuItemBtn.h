@class RightTopMenuItemBtnData;

@interface RightTopMenuItemBtn : MMUIButton

@property (retain, nonatomic) RightTopMenuItemBtnData *m_data;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithBtnData:(id)a0 showNew:(BOOL)a1;
- (void).cxx_destruct;

@end
