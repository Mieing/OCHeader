@class NSString, UIImageView, UIView, RichTextView;

@interface FavRecordReferView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *highlightView;
@property (retain, nonatomic) UIView *referLineView;
@property (retain, nonatomic) RichTextView *richTextView;
@property (readonly, nonatomic) UIImageView *thumbImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeForContent:(id)a0 maxWidth:(double)a1 font:(id)a2 outArrStyles:(id *)a3 hasImage:(BOOL)a4;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initViews;
- (void)layoutSubviews;
- (void)updateWithSize:(struct CGSize { double x0; double x1; })a0 arrStyles:(id)a1;
- (void)setThumbImage:(id)a0;
- (void)onStateChanged:(id)a0;
- (void)onTouchEffect;
- (void)onTouchRemoveEffect;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;

@end
