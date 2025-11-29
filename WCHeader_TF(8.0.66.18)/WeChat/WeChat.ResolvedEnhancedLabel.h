@interface WeChat.ResolvedEnhancedLabel : NSObject {
    void /* unknown type, empty encoding */ attributedString;
    void /* unknown type, empty encoding */ primitiveStyle;
    void /* unknown type, empty encoding */ drawModifiers;
    void /* unknown type, empty encoding */ proposedSize;
    void /* unknown type, empty encoding */ cacheSize;
}

- (id)makeView;
- (struct CGSize { double x0; double x1; })size;
- (void)drawIn:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1;
- (id)init;
- (void).cxx_destruct;

@end
