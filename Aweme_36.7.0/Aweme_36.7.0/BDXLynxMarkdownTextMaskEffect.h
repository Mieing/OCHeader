@class NSString, NSArray;

@interface BDXLynxMarkdownTextMaskEffect : BDXLynxMarkdownEffect {
    NSString *_color;
    int _range_start;
    int _range_end;
    NSArray *_gradient;
}

- (void)afterDraw:(struct CGContext { } *)a0 Bundle:(id)a1;
- (id)initWithProperties:(id)a0;
- (void).cxx_destruct;

@end
