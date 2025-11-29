@class NSString, RACSignal, RACSubject, UIViewController;

@interface HTSLivePopupContainer : HTSEventForwardingView <UIGestureRecognizerDelegate>

@property (nonatomic) long long popupViewCount;
@property (retain, nonatomic) RACSubject *stateDidChangedSubject;
@property (readonly, nonatomic) RACSignal *stateDidChanged;
@property (copy, nonatomic) id /* block */ filterBlock;
@property (weak, nonatomic) UIViewController *rootViewController;
@property (copy, nonatomic) id /* block */ disableAddBlock;
@property (copy, nonatomic) id /* block */ disableUpdatePopupStatusBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addSubview:(id)a0 identifier:(id)a1;
- (BOOL)hasPopup;
- (void)clearWithViewController:(id)a0;
- (void)addPanGesture;
- (void).cxx_destruct;
- (void)clear;
- (void)didAddSubview:(id)a0;
- (void)willRemoveSubview:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addSubview:(id)a0;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })size;
- (void)panned:(id)a0;

@end
