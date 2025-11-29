@class NSString;
@protocol IEcsOpenRouter;

@interface EcsOpenBaseRouter_UrObject : NSObject <EcsCoreEcsOpenHandler_Ur>

@property (retain, nonatomic) id<IEcsOpenRouter> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)create:(id)a0;

- (id)name;
- (BOOL)canHandle:(id)a0 context:(id)a1;
- (void)handlePreload:(id)a0 context:(id)a1 preloadConfig:(id)a2 callback:(id /* block */)a3;
- (void)handleOpen:(id)a0 context:(id)a1 callback:(id /* block */)a2;
- (void).cxx_destruct;

@end
