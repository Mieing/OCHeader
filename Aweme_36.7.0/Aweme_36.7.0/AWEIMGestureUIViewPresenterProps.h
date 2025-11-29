@interface AWEIMGestureUIViewPresenterProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) id /* block */ tapAction;
@property (copy, nonatomic) id /* block */ overallTapAction;
@property (copy, nonatomic) id /* block */ alphaTapAction;
@property (copy, nonatomic) id /* block */ doubleTapAction;
@property (copy, nonatomic) id /* block */ longPressAction;
@property (copy, nonatomic) id /* block */ longPressReceiveTouchBlock;
@property (copy, nonatomic) id /* block */ tapReceiveTouchBlock;
@property (copy, nonatomic) id /* block */ overallTapReceiveTouchBlock;

- (void).cxx_destruct;

@end
