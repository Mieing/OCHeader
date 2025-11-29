@class NSString, WCFinderRichTextView, UIView;

@interface WCFinderOperateEntranceTipsView : UIView <ClickStatSwizzleExt>

@property (weak, nonatomic) UIView *referView;
@property (retain, nonatomic) WCFinderRichTextView *textView;
@property (nonatomic) BOOL needReflush;
@property (retain, nonatomic) NSString *content;
@property (copy, nonatomic) id /* block */ onClickOtherArea;
@property (nonatomic) unsigned long long position;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupContent:(id)a0 referView:(id)a1;
- (void)setupBubble;
- (id)createTipsTextVeiw;
- (void)handleOtherTouch;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
