@class UITextView, NSString, NSDictionary, UIButton, NSParagraphStyle;

@interface IESECFoldableTextView : UIControl {
    NSString *__text;
    NSString *__foldedText;
    UITextView *_textView;
    UIButton *_foldingControlButton;
    BOOL _scrollableWhenUnfold;
    double _foldedTextHeight;
    double _unfoldedTextHeight;
}

@property (copy, nonatomic) NSParagraphStyle *paragraphStyle;
@property (copy, nonatomic) NSDictionary *attributes;
@property (copy, nonatomic) NSString *text;
@property (nonatomic, getter=isFolded) BOOL folded;
@property (readonly, nonatomic) BOOL isScrollEnabled;
@property (nonatomic) long long maximumNumberOfLines;
@property (nonatomic) double maximumHeight;

- (struct CGSize { double x0; double x1; })textSizeInContainerSize:(struct CGSize { double x0; double x1; })a0;
- (void)foldingControlButtonDidClick:(id)a0;
- (id)foldedText;
- (id)attributedStringFromString:(id)a0;
- (struct vector<TextViewLayoutLine, std::allocator<TextViewLayoutLine>> { struct TextViewLayoutLine *x0; struct TextViewLayoutLine *x1; struct TextViewLayoutLine *x2; })layoutLinesWithTextView:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)imageWithColor:(id)a0;
- (void)layoutSubviews;
- (void)setupSubviews;

@end
