@protocol ADFGBridgeEngine;

@interface ADFGBridgePlugin : NSObject

@property (weak, nonatomic) id<ADFGBridgeEngine> engine;

+ (void)_doRegisterIfNeeded;

- (void)getVersionWithParam:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3;
- (void).cxx_destruct;

@end
