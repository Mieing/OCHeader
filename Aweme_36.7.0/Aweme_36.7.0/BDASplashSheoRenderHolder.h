@class NSString, BDSHEngine;
@protocol BDASplashCommonRenderDelegate;

@interface BDASplashSheoRenderHolder : NSObject <BDSHEngineDelegate, BDASplashCommonRenderProtocol>

@property (weak, nonatomic) id<BDASplashCommonRenderDelegate> delegate;
@property (retain, nonatomic) BDSHEngine *engine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createCommonRenderHolderWithConfig:(id)a0;
+ (void)downloadResourceWithRenderData:(id)a0;

- (void)engine:(id)a0 handleBridgeWithName:(id)a1 params:(id)a2 callback:(id /* block */)a3;
- (void)engine:(id)a0 loadWithEventType:(long long)a1 eventInfo:(id)a2;
- (id)engine:(id)a0 getCustomComponentWithCustomType:(id)a1 extra:(id)a2;
- (void)engine:(id)a0 sendDebugLog:(id)a1;
- (void)p_setupWithRenderConfig:(id)a0;
- (void)p_renderSuccess;
- (void)p_renderFailedWithAsync:(BOOL)a0 message:(id)a1;
- (void).cxx_destruct;
- (void)destroy;
- (id)initWithConfig:(id)a0;
- (void)show;

@end
