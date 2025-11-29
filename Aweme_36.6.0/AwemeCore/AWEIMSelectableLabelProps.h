@class NSAttributedString;

@interface AWEIMSelectableLabelProps : AWEIMYYLabelProps

@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } visibleRange;
@property (readonly, copy, nonatomic) NSAttributedString *visibleAttributedText;
@property (copy, nonatomic) NSAttributedString *rawAttributedText;

- (id)getVisibleAttributedTextWithVisibleRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void).cxx_destruct;
- (id)init;

@end
