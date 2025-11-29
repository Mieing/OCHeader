@class UILongPressGestureRecognizer, AWEIMQuickDoubleTapGestureRecognizer, AWEIMAlphaTapGesture, NSString, UITapGestureRecognizer;

@interface AWEIMGestureView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) AWEIMAlphaTapGesture *alphaTapGesture;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UITapGestureRecognizer *overallTapGesture;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (retain, nonatomic) AWEIMQuickDoubleTapGestureRecognizer *doubleTapGesture;
@property (copy, nonatomic) id /* block */ alphaTapAction;
@property (copy, nonatomic) id /* block */ tapAction;
@property (copy, nonatomic) id /* block */ overallTapAction;
@property (copy, nonatomic) id /* block */ longPressAction;
@property (copy, nonatomic) id /* block */ doubleTapAction;
@property (copy, nonatomic) id /* block */ longPressReceiveTouchBlock;
@property (copy, nonatomic) id /* block */ tapReceiveTouchBlock;
@property (copy, nonatomic) id /* block */ overallTapReceiveTouchBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tapGestureAction:(id)a0;
- (void)longPressGestureAction:(id)a0;
- (void)overallTapGestureAction:(id)a0;
- (void)alphaTapGestureAction:(id)a0;
- (void)doubleTapGestureAction:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;

@end
