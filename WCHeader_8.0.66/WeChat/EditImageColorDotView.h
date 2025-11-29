@class EditImageColor, UIView;

@interface EditImageColorDotView : UIControl {
    UIView *m_dotView;
}

@property (retain, nonatomic) EditImageColor *editColor;
@property (nonatomic) double selectedSizeLen;
@property (nonatomic) double unselectedSizeLen;
@property (nonatomic) double borderWidth;
@property (nonatomic) long long expandHitWidth;
@property (nonatomic) long long expandHitHeight;

- (void)setSelected:(BOOL)a0;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
