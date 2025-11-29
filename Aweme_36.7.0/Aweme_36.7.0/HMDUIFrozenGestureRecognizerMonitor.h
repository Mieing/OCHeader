@class UIWindow, UISwipeGestureRecognizer, NSString, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, HMDUIFrozenGestureDetectProtocol;

@interface HMDUIFrozenGestureRecognizerMonitor : NSObject <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIWindow *targetWindow;
@property (retain, nonatomic) NSMutableArray *gestures;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *storeQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *consumeQueue;
@property (retain, nonatomic) UISwipeGestureRecognizer *up;
@property (retain, nonatomic) UISwipeGestureRecognizer *down;
@property (retain, nonatomic) UISwipeGestureRecognizer *left;
@property (retain, nonatomic) UISwipeGestureRecognizer *right;
@property (nonatomic) BOOL isUnresponsive;
@property (nonatomic) BOOL isRecording;
@property (weak, nonatomic) id<HMDUIFrozenGestureDetectProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)stopRecord;
- (void)startRecord;
- (void)consumeStoreGestureRecordWithBlock:(id /* block */)a0;
- (void)handSwipeUP:(id)a0;
- (void)handSwipeDown:(id)a0;
- (void)handSwipeLeft:(id)a0;
- (void)handSwipeRight:(id)a0;
- (void)removeUIFrozenGestureRecognizers;
- (void)asyncStoreGestureRecord:(id)a0;
- (void)uploadGestureUnresponsiveExceptionWithViewHierarchy:(id)a0;
- (void)addUIFrozenGestureRecognizersForWindow:(id)a0;
- (void)addUIFrozenGestureRecognizersForKeyWindow;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)init;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)resetRecord;

@end
