@interface LynxMarkdownDocument : NSObject {
    struct unique_ptr<lynx::markdown::MarkdownDocument, std::default_delete<lynx::markdown::MarkdownDocument>> { struct MarkdownDocument *__ptr_; } _markdown_document;
    struct unique_ptr<MarkdownResourceLoaderIOS, std::default_delete<MarkdownResourceLoaderIOS>> { struct MarkdownResourceLoaderIOS *__ptr_; } _loader;
    struct unique_ptr<lynx::markdown::MarkdownEventIOS, std::default_delete<lynx::markdown::MarkdownEventIOS>> { struct MarkdownEventIOS *__ptr_; } _event;
    struct shared_ptr<lynx::markdown::MarkdownPage> { struct MarkdownPage *__ptr_; struct __shared_weak_count *__cntrl_; } _page;
}

@property (nonatomic) BOOL useNewDrawer;

- (unsigned long long)TypewriterStepToChar:(unsigned long long)a0;
- (id)GetSelectionRectByCharPos:(int)a0 end:(int)a1;
- (void)SetResourceDelegate:(id)a0;
- (void)SetEventDelegate:(id)a0;
- (struct CGPoint { double x0; double x1; })GetInlineViewOrigin:(id)a0;
- (void)EnableGif:(BOOL)a0;
- (void)AllowBreakAroundPunctuation:(BOOL)a0;
- (struct CGSize { double x0; double x1; })Parse:(id)a0 withWidth:(float)a1 Height:(float)a2 MaxLine:(int)a3 ContentStart:(int)a4 ContentEnd:(int)a5;
- (int)GetMaxTypewriterStep;
- (id)GetLinks;
- (struct CGPoint { double x0; double x1; })FindCursorPosition:(int)a0 ContentComplete:(BOOL)a1 PageComplete:(BOOL *)a2 MaxDrawHeight:(float *)a3;
- (void)SetStyle:(id)a0;
- (id)GetSyntaxSourceRanges:(id)a0;
- (id)GetContentByCharStart:(int)a0 End:(int)a1;
- (int)MarkdownIndexToCharIndex:(int)a0;
- (id)GetImages;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })GetRegionRect:(int)a0;
- (void)DrawRegion:(int)a0 InContext:(struct CGContext { } *)a1 CanvasCallback:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })GetExtraBorderRect:(int)a0;
- (void)DrawExtraBorder:(int)a0 InContext:(struct CGContext { } *)a1;
- (long long)GetPageCharCount;
- (int)GetRegionCount;
- (int)GetExtraBorderCount;
- (void)Draw:(struct CGContext { } *)a0 CanvasCallback:(id)a1 TypewriterStep:(int)a2 ContentComplete:(BOOL)a3;
- (void)Draw:(struct CGContext { } *)a0 CanvasCallback:(id)a1;
- (id)GetLinkByTouchPosition:(struct CGPoint { double x0; double x1; })a0;
- (id)GetImageByTouchPosition:(struct CGPoint { double x0; double x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })GetCharRangeByPoint:(struct CGPoint { double x0; double x1; })a0 Type:(unsigned long long)a1;
- (unsigned long long)OnTouchBegin:(struct CGPoint { double x0; double x1; })a0;
- (unsigned long long)OnTouchMove:(struct CGPoint { double x0; double x1; })a0;
- (unsigned long long)OnTouchEnd:(struct CGPoint { double x0; double x1; })a0;
- (unsigned long long)OnTouchCancel:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)TouchPointCanScroll:(struct CGPoint { double x0; double x1; })a0;
- (struct shared_ptr<lynx::markdown::MarkdownPage> { struct MarkdownPage *x0; struct __shared_weak_count *x1; })getPage;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end
