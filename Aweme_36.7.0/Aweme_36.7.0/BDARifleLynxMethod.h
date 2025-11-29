@class NSString;

@interface BDARifleLynxMethod : NSObject

@property (copy, nonatomic) NSString *methodName;
@property (copy, nonatomic) id /* block */ handler;

+ (id)methodWithName:(id)a0 handler:(id /* block */)a1;

- (void).cxx_destruct;

@end
