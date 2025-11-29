@class NSSet, WeChatIntroduction;

@interface IntroductionItemView : UIControl {
    NSSet *m_touches;
}

@property (nonatomic) BOOL isLongPressHandled;
@property (copy, nonatomic) id /* block */ handleClick;
@property (copy, nonatomic) id /* block */ handleLongPress;
@property (retain, nonatomic) WeChatIntroduction *introduction;

- (id)initWithIntroduction:(id)a0;
- (void)sizeToFit:(struct CGSize { double x0; double x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)initViews;
- (void)onTouchDown;
- (void)onTouchUpInside;
- (void)LongPressEvents;
- (void).cxx_destruct;

@end
