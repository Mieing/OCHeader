@class NSString, LynxEventHandler;

@interface CustomGestureRecognizerDelegate : NSObject <UIGestureRecognizerDelegate>

@property (weak) LynxEventHandler *eventHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithEventHandler:(id)a0;

@end
