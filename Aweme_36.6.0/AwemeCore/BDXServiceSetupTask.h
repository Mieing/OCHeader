@class NSString, Protocol;

@interface BDXServiceSetupTask : NSObject

@property (retain, nonatomic) Protocol *prococol;
@property (copy, nonatomic) NSString *bizID;
@property (copy, nonatomic) id /* block */ action;

+ (id)taskWithService:(id)a0 bizID:(id)a1 action:(id /* block */)a2;

- (void).cxx_destruct;

@end
