@class EmojiInfoObj, UIView, MMWebImageView, MMUILabel;

@interface SingleEmoticonView : UIControl

@property (retain, nonatomic) MMWebImageView *thumbView;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) UIView *curMaskView;
@property (retain, nonatomic) EmojiInfoObj *emojiInfoObj;

+ (struct CGSize { double x0; double x1; })sizeWithSideLength:(double)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;

@end
