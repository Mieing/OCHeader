@class NSString, NSDictionary;

@interface BDLynxMonitorModule : NSObject <LynxModule>

@property (class, readonly, copy, nonatomic) NSString *name;
@property (class, readonly, copy, nonatomic) NSDictionary *methodLookup;
@property (class, readonly, copy, nonatomic) NSDictionary *attributeLookup;

@property (copy, nonatomic) NSString *containerID;
@property (retain, nonatomic) id extraData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithParam:(id)a0;
- (void)reportJSError:(id)a0 callback:(id /* block */)a1;
- (void)customReport:(id)a0 callback:(id /* block */)a1;
- (void)config:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;

@end
