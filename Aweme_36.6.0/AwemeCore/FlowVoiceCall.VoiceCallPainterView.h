@interface FlowVoiceCall.VoiceCallPainterView : UIView {
    void /* unknown type, empty encoding */ content;
    void /* unknown type, empty encoding */ tmpImage;
    void /* unknown type, empty encoding */ paintColor;
    void /* unknown type, empty encoding */ paintWidth;
}

- (void).cxx_destruct;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
