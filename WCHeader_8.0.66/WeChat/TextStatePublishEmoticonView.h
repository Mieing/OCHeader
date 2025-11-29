@class MMEmoticonView, CAShapeLayer, CEmoticonWrap, MMUIButton;

@interface TextStatePublishEmoticonView : UIView

@property (retain, nonatomic) MMEmoticonView *emoticonView;
@property (retain, nonatomic) MMUIButton *deleteButton;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (copy, nonatomic) id /* block */ tapDeleteButtonHandler;
@property (retain, nonatomic) CEmoticonWrap *emoticonWrap;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)onTapDeleteButton;
- (id)generateBezierPath;
- (void).cxx_destruct;

@end
