@class NSRecursiveLock, NSString, NSTimer, AWEInAppMessageView;

@interface AWEInAppMessage : NSObject <AWEInAppMessageViewDelegate>

@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) AWEInAppMessageView *currentView;
@property (weak, nonatomic) NSTimer *timer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showOnView:(id)a0 config:(id)a1 showBlock:(id /* block */)a2 actionBlock:(id /* block */)a3 dismissBlock:(id /* block */)a4;
+ (void)show:(id)a0 showBlock:(id /* block */)a1 actionBlock:(id /* block */)a2 dismissBlock:(id /* block */)a3;
+ (void)dismiss;
+ (id)sharedInstance;

- (void)didEndDragging:(BOOL)a0;
- (void)timerFired:(id)a0;
- (void).cxx_destruct;

@end
