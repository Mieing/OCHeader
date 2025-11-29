@class NSMutableDictionary;
@protocol BDNativeWebComponentLogicDelegate;

@interface BDNativeWebComponentLogic : NSObject

@property (class, readonly, nonatomic) NSMutableDictionary *nativeComponentClassDic;

@property (retain, nonatomic) NSMutableDictionary *nativeComponentDic;
@property (weak, nonatomic) id<BDNativeWebComponentLogicDelegate> delegate;
@property (retain, nonatomic) NSMutableDictionary *containerObjects;

+ (void)registerGlobalNativeComponent:(id)a0;

- (void)invokeInitialize:(id)a0 completion:(id /* block */)a1;
- (void)invokeUpdate:(id)a0 completion:(id /* block */)a1;
- (void)invokeDestory:(id)a0 completion:(id /* block */)a1;
- (void)insertNativeTag:(id)a0 completion:(id /* block */)a1;
- (BOOL)updateNativeTag:(id)a0;
- (void)deleteNativeTag:(id)a0;
- (void)clearNativeComponent;
- (void)handleInvokeFunction:(id)a0 completion:(id /* block */)a1;
- (void)handleCallbackFunction:(id)a0 completion:(id /* block */)a1;
- (id)checkNativeInfos;
- (void)clearNativeComponentWithIFrameID:(id)a0;
- (id)updateNativeTags:(id)a0;
- (id)deleteNativeTags:(id)a0;
- (void)dispatchAction:(id)a0 callback:(id /* block */)a1;
- (void)registerNativeComponent:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
