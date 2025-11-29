@class NSMutableSet, NSHashTable, UIView, IESLLPOIUITapGestureRecognizer;
@protocol IESLLNoActionEventHandlerDelegate;

@interface IESLLNoActionEventHandler : NSObject

@property (retain, nonatomic) NSMutableSet *touches;
@property (retain, nonatomic) NSHashTable *ignoreViews;
@property (retain, nonatomic) NSMutableSet *ignoreViewClassNames;
@property (retain, nonatomic) NSMutableSet *ignoreGestuerRecognizerClassNames;
@property (retain, nonatomic) NSHashTable *historyGestureRecognizers;
@property (retain, nonatomic) IESLLPOIUITapGestureRecognizer *tapGesture;
@property (weak, nonatomic) UIView *detectedView;
@property (nonatomic) unsigned long long clickState;
@property (nonatomic) unsigned long long slideState;
@property (copy, nonatomic) id /* block */ completeHandlerWithMessage;
@property (copy, nonatomic) id /* block */ clickHandlerWithMessage;
@property (copy, nonatomic) id /* block */ slideHandlerWithMessage;
@property (nonatomic) BOOL isDito;
@property (nonatomic) unsigned long long style;
@property (nonatomic) BOOL noResponse;
@property (nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (weak, nonatomic) id<IESLLNoActionEventHandlerDelegate> delegate;

- (void)addIgnoreView:(id)a0;
- (id)initWithDetectedView:(id)a0;
- (void)addIgnoreGestuerRecognizerClassNames:(id)a0;
- (void)setupTapGestureWithView:(id)a0;
- (BOOL)hasLoggedClickAndSlideOperation;
- (BOOL)touchHasMoved:(id)a0;
- (BOOL)gestureRecognizerContainsIgnoreGestureRecognizer:(id)a0;
- (BOOL)shouldConsiderateCancelledGestureRecogonizers;
- (BOOL)viewShouldBeIgnored:(id)a0;
- (void)setTouchHasMoved:(id)a0 hasMoved:(BOOL)a1;
- (void)setTouchStartY:(id)a0 startY:(double)a1;
- (void)setTouchStartX:(id)a0 startX:(double)a1;
- (void)updateWithUITouch:(id)a0 previousStatus:(long long)a1;
- (BOOL)hasLoggedClickOperation;
- (BOOL)hasLoggedSlideOperation;
- (double)touchStartY:(id)a0;
- (double)touchStartX:(id)a0;
- (void)addIgnoreViewClassNames:(id)a0;
- (void)sendEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)logEvent:(id)a0;

@end
