@class NSString, NSDictionary;
@protocol BDARVLynxBridgeContext;

@interface BDARVLynxBaseBridgeModule : NSObject <LynxModule>

@property (class, readonly, copy, nonatomic) NSString *name;
@property (class, readonly, copy, nonatomic) NSDictionary *methodLookup;
@property (class, readonly, copy, nonatomic) NSDictionary *attributeLookup;

@property (weak, nonatomic) id<BDARVLynxBridgeContext> context;
@property (retain, nonatomic) id extraData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithParam:(id)a0;
- (id)getStorage:(id)a0;
- (void)canOpenURLs:(id)a0 successCallback:(id /* block */)a1 failCallback:(id /* block */)a2;
- (void)removeStorage:(id)a0;
- (void)checkCanOpenURL:(id)a0 iterator:(id /* block */)a1 successCallback:(id /* block */)a2 failCallback:(id /* block */)a3;
- (void).cxx_destruct;
- (void)setStorage:(id)a0;

@end
