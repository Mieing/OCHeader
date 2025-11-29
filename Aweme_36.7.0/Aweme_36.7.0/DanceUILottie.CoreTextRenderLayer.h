@interface DanceUILottie.CoreTextRenderLayer : CALayer {
    void /* unknown type, empty encoding */ text;
    void /* unknown type, empty encoding */ font;
    void /* unknown type, empty encoding */ alignment;
    void /* unknown type, empty encoding */ lineHeight;
    void /* unknown type, empty encoding */ tracking;
    void /* unknown type, empty encoding */ fillColor;
    void /* unknown type, empty encoding */ strokeColor;
    void /* unknown type, empty encoding */ strokeWidth;
    void /* unknown type, empty encoding */ strokeOnTop;
    void /* unknown type, empty encoding */ preferredSize;
    void /* unknown type, empty encoding */ drawingRect;
    void /* unknown type, empty encoding */ drawingAnchor;
    void /* unknown type, empty encoding */ fillFrameSetter;
    void /* unknown type, empty encoding */ attributedString;
    void /* unknown type, empty encoding */ strokeFrameSetter;
    void /* unknown type, empty encoding */ needsContentUpdate;
}

- (void)drawInContext:(struct CGContext { } *)a0;
- (void).cxx_destruct;
- (id)initWithLayer:(id)a0;
- (id)init;
- (id)actionForKey:(id)a0;
- (id)initWithCoder:(id)a0;

@end
