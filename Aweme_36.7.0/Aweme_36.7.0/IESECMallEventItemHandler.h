@class NSSet;

@interface IESECMallEventItemHandler : NSObject

@property (copy, nonatomic) NSSet *eventNames;
@property (copy, nonatomic) id /* block */ eventHandler;
@property (weak, nonatomic) id subscriber;
@property (nonatomic) BOOL hasBindSubscriber;

- (id)initWithSubscriber:(id)a0 events:(id)a1 handler:(id /* block */)a2;
- (void)executeHandlerWithEventName:(id)a0 andValue:(id)a1;
- (void).cxx_destruct;

@end
