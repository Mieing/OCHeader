@class NSString;

@interface IESECLynxCardBridgeMethod : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) id /* block */ handler;

+ (id)bridgeMethodWithName:(id)a0 handler:(id /* block */)a1;

- (void).cxx_destruct;

@end
