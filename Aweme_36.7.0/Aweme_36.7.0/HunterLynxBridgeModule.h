@class NSString, NSDictionary, HunterLynxBackgroundRuntime;

@interface HunterLynxBridgeModule : NSObject <LynxModule>

@property (class, readonly, copy, nonatomic) NSString *name;
@property (class, readonly, copy, nonatomic) NSDictionary *methodLookup;
@property (class, readonly, copy, nonatomic) NSDictionary *attributeLookup;

@property (weak, nonatomic) HunterLynxBackgroundRuntime *runtime;
@property (retain, nonatomic) id extraData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithParam:(id)a0;
- (void)call:(id)a0 params:(id)a1 callback:(id /* block */)a2;
- (void).cxx_destruct;

@end
