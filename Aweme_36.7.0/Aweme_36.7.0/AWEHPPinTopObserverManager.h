@class NSMutableDictionary;

@interface AWEHPPinTopObserverManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *observerDict;

- (BOOL)addObserver:(id)a0 withConfig:(id)a1;
- (void)pinTopCompleteWithResult:(long long)a0 context:(id)a1;
- (void)componentShowWithContext:(id)a0;
- (void)componentDismissWithReason:(long long)a0 context:(id)a1;
- (void)pinTopSuccessBubbleShowWithContext:(id)a0;
- (void)pinTopSuccessBubbleHideWithContext:(id)a0;
- (void)context:(id)a0 needModifyComponentUIModel:(id /* block */)a1;
- (void)context:(id)a0 shouldComponentShow:(id /* block */)a1;
- (BOOL)checkConfigValid:(id)a0;
- (void)observerArray:(id)a0 count:(long long)a1 context:(id)a2 shouldShowBlock:(id /* block */)a3;
- (void)observerArray:(id)a0 count:(long long)a1 context:(id)a2 shouldModifyBlock:(id /* block */)a3;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;

@end
