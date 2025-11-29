@class NSNumber, NSString;

@interface WCFinderProfileRedPacketEventView : UIView

@property (nonatomic) long long style;
@property (retain, nonatomic) NSNumber *theStyle;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subTitle;
@property (nonatomic) struct CGSize { double width; double height; } mIntrinsicContentSize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithTitle:(id)a0 subTitle:(id)a1 style:(long long)a2;
- (void)_updateEventView;
- (void)didMoveToSuperview;
- (void)ensureStyle;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setBigCardStyle;
- (void)setupThinkStyle:(id)a0 subTitle:(id)a1;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (void)onTapClose;
- (void)onClickSelf;
- (void).cxx_destruct;

@end
