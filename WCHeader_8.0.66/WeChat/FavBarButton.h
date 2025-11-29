@class UIImageView, MMUILabel, UIView;

@interface FavBarButton : MMUIButton {
    UIView *_divTopLine;
    UIImageView *_arrowIcon;
    MMUILabel *_label;
    double _pixelLineAndLabelHor;
    double _pixelLineAndLabelVer;
    double _pixelLabelAndArrowHor;
    double _arrowHeight;
    double _arrowWidth;
    double _fontSize;
    double _lineHeight;
    double _maxWidth;
    struct CGSize { double width; double height; } _labelSize;
}

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initView;
- (struct CGSize { double x0; double x1; })calFavBarButtonSize;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })setLabelText:(id)a0;
- (void).cxx_destruct;

@end
