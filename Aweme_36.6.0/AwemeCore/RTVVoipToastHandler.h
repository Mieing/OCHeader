@class NSMutableArray;
@protocol RxInjector;

@interface RTVVoipToastHandler : NSObject

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (retain, nonatomic) NSMutableArray *toastQueue;
@property (nonatomic) BOOL isToasting;

- (void)rxAwakeFromPropertyInjection;
- (void)showToastWithText:(id)a0;
- (void)__showToastWithText:(id)a0;
- (void)emptyAllToast;
- (void)__dequeue;
- (void)__enqueueWithToast:(id)a0;
- (void)__startToastIfNeeded;
- (BOOL)__isToastQueueEmpty;
- (id)__nextToast;
- (id)waitingToastMessages;
- (void)showToastWithToastBody:(id)a0;
- (void).cxx_destruct;

@end
