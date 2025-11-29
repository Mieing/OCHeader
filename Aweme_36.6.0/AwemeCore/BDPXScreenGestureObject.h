@class UIPanGestureRecognizer, NSString, NSMutableArray, UITapGestureRecognizer;
@protocol BDPXScreenGestureTranslationDelegate;

@interface BDPXScreenGestureObject : NSObject <UIGestureRecognizerDelegate>

@property (nonatomic) double containerBottom;
@property (nonatomic) long long quarterPositionTopUnderXScreen;
@property (nonatomic) long long quarterPositionTopAboveXScreen;
@property (nonatomic) long long threeQuarterPositionTopAboveXScreen;
@property (nonatomic) double XScreenRate;
@property (nonatomic) long long XScreenPositionTop;
@property (retain, nonatomic) NSMutableArray *otherGestureRecognizers;
@property (retain, nonatomic) UIPanGestureRecognizer *pan;
@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (nonatomic) BOOL gestureOptFlag;
@property (weak, nonatomic) id<BDPXScreenGestureTranslationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onTapGestureAction:(id)a0;
- (void)updateXScreenRate:(double)a0 containerBottom:(double)a1;
- (void)onPanGestureAction:(id)a0;
- (BOOL)tryToDisableOtherConflictingGestures:(struct CGPoint { double x0; double x1; })a0;
- (unsigned long long)getTranslationPosition:(long long)a0;
- (void)restoreAndClearOtherConflictingGestures;
- (BOOL)newTryToDisableOtherConflictingGestures:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)canDisableConflictingGesture:(id)a0 translation:(struct CGPoint { double x0; double x1; })a1;
- (long long)countOfScrollView;
- (BOOL)newCanDisableConflictingGesture:(id)a0 translation:(struct CGPoint { double x0; double x1; })a1;
- (void)addOtherConflictingGesture:(id)a0;
- (id)initWithXScreenRate:(double)a0 containerBottom:(double)a1;
- (void)setupXScreenPanGestureOnView:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;

@end
