@class UIColor;

@interface MMCursorView : UIView {
    float m_dotRadius;
}

@property (nonatomic) int cursorType;
@property (nonatomic) float cursorHeight;
@property (retain, nonatomic) UIColor *cursorColor;
@property (nonatomic) struct CGPoint { double x; double y; } originPoint;
@property (nonatomic) BOOL bDraged;

- (id)initWithCursorType:(int)a0 andHeight:(float)a1 andCursorColor:(id)a2;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
