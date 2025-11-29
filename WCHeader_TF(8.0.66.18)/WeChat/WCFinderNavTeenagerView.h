@class UIImageView, RichTextView;
@protocol WCFinderNavTeenagerViewDelegate;

@interface WCFinderNavTeenagerView : MMBarItemCustomView

@property (retain, nonatomic) RichTextView *richTextView;
@property (nonatomic) double maxWidth;
@property (retain, nonatomic) UIImageView *teenagerImageView;
@property (weak, nonatomic) id<WCFinderNavTeenagerViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)updateTitle:(id)a0 mode:(unsigned long long)a1;
- (void)_updateUIStyle:(unsigned long long)a0;
- (void)updateUIModelStyle:(unsigned long long)a0;
- (void)layoutAllSubviews;
- (void)onClickAction;
- (void).cxx_destruct;

@end
