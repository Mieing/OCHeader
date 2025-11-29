@class NSString, RichTextView;

@interface WCTextThumbView : UIView <RichTextLayoutDelegate> {
    BOOL _needsUpdateTextContent;
}

@property (readonly, nonatomic) RichTextView *richTextView;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } textPadding;
@property (nonatomic) long long textVerticalAlignment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })textMaxSize;
- (void)layoutSubviews;
- (BOOL)shouldOpenNewLineAtY:(double)a0 withLineHeight:(double)a1 richTextView:(id)a2;
- (void).cxx_destruct;

@end
