@class NSString, IESECContext;

@interface IESECContextEventSubscriber : NSObject

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) id /* block */ callback;
@property (weak, nonatomic) IESECContext *targetContext;

- (void)attachToTarget:(id)a0;
- (void).cxx_destruct;
- (BOOL)unsubscribe;
- (void)dealloc;

@end
