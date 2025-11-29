@class NSString, NSDictionary, LynxContext;

@interface LynxUIMethodModule : NSObject <LynxContextModule> {
    LynxContext *context_;
}

@property (class, readonly, copy, nonatomic) NSString *name;
@property (class, readonly, copy, nonatomic) NSDictionary *methodLookup;
@property (class, readonly, copy, nonatomic) NSDictionary *attributeLookup;

@property (retain, nonatomic) id extraData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)wrapInvokeUIMethodCallback:(id /* block */)a0;
+ (void)runOnUiThread:(id /* block */)a0;

- (id)initWithLynxContext:(id)a0;
- (void)invokeUIMethod:(id)a0 nodes:(id)a1 method:(id)a2 params:(id)a3 callback:(id /* block */)a4;
- (void).cxx_destruct;

@end
