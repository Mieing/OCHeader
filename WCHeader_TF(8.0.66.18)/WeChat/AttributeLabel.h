@class UIColor;

@interface AttributeLabel : UILabel

@property (retain, nonatomic) UIColor *userColor;

- (void)setText:(id)a0 highlightKeyWord:(id)a1;
- (void)setText:(id)a0 highlightKeyWord:(id)a1 startIndex:(unsigned long long)a2;
- (void)setText:(id)a0 highlightKeyWord:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)setText:(id)a0 highlightKeyWord:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 highlightFont:(id)a3;
- (void)setText:(id)a0 highlightKeyWord:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 highlightFont:(id)a3 highlightColor:(id)a4;
- (void)setTextColor:(id)a0;
- (void)setText:(id)a0;
- (void).cxx_destruct;

@end
