@class NSString;

@interface BDLynxBridgeMethod : NSObject

@property (readonly, copy, nonatomic) id /* block */ handler;
@property (readonly, copy, nonatomic) id /* block */ sessionHandler;
@property (readonly, copy, nonatomic) NSString *namescope;
@property (readonly, copy, nonatomic) NSString *methodName;

- (id)initWithMethodName:(id)a0 handler:(id /* block */)a1 sessionHandler:(id /* block */)a2 namescope:(id)a3;
- (void).cxx_destruct;

@end
