@class UIFont, AWEIMGroupNoticeModifyContentProps, UIImageView, UIView, YYLabel;

@interface AWEIMGroupNoticeModifyContentView : AWEIMShapeView

@property (retain, nonatomic) YYLabel *titleLabel;
@property (retain, nonatomic) YYLabel *contentLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIFont *textFont;
@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) AWEIMGroupNoticeModifyContentProps *props;

+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })bubbleContentPaddingInsets;
+ (double)lineMargin;

- (void)p_addSubviews;
- (void)updateWithProps:(id)a0;
- (void)p_addConstraint;
- (void)p_addTapAction;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
