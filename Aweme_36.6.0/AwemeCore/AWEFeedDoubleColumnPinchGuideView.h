@class UILongPressGestureRecognizer, NSString, UIPinchGestureRecognizer, UILabel, BDImageView;

@interface AWEFeedDoubleColumnPinchGuideView : UIView <UIGestureRecognizerDelegate>

@property (nonatomic) long long guideType;
@property (retain, nonatomic) BDImageView *animationView;
@property (nonatomic) double showTimeStamp;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIPinchGestureRecognizer *pinchGesture;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (nonatomic) BOOL isHandlingGesture;
@property (nonatomic) BOOL isDismissing;
@property (nonatomic) long long animationLoopCount;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (retain, nonatomic) NSString *fromItemID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showOnView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 guideType:(long long)a1;
- (double)getRealBlockDuration;
- (void)dismiss;
- (void).cxx_destruct;
- (void)handlePinch:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)setupUI;

@end
