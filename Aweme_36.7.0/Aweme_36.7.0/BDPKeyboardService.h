@class NSString, BDPMultiDelegateProxy;
@protocol BDPKeyboardResponderDelegate;

@interface BDPKeyboardService : NSObject <BDPKeyboardService>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } keyboardFrame;
@property (nonatomic) double keyboardAnimationDuration;
@property (nonatomic) long long keyboardAnimationCurve;
@property (nonatomic, getter=isKeyboardShow) BOOL keyboardShow;
@property (nonatomic, getter=isNeedFixKeyboardObserve) BOOL needFixKeyboardObserve;
@property (retain, nonatomic) BDPMultiDelegateProxy<BDPKeyboardResponderDelegate> *delegates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (id)initService;
- (void)addKeyboardObserve;
- (void).cxx_destruct;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void)dealloc;
- (void)keyboardWillChange:(id)a0;

@end
