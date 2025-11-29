@class NSString;

@interface CustomScrollView : UIScrollView <UIGestureRecognizerDelegate>

@property (copy, nonatomic) id /* block */ gestureRecognizerClosure;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;

@end
