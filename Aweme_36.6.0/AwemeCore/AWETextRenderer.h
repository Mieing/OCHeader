@class NSMutableArray, AWETextRendererContext, NSTextStorage, NSLayoutManager, NSTextContainer;

@interface AWETextRenderer : NSObject {
    struct CGSize { double width; double height; } _boundingSize;
    BOOL _truncated;
    NSMutableArray *_lineFragmentRects;
}

@property (retain, nonatomic) AWETextRendererContext *context;
@property (retain, nonatomic) NSTextStorage *textStorage;
@property (retain, nonatomic) NSLayoutManager *layoutManager;
@property (retain, nonatomic) NSTextContainer *textContainer;

- (id)initWithRendererContext:(id)a0;
- (id)lineFragmentRects;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void).cxx_destruct;
- (BOOL)isTruncated;
- (void)layout;
- (struct CGSize { double x0; double x1; })size;
- (void)layoutWithContext:(id)a0;

@end
