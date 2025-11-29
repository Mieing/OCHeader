@interface TXLiveJSAdapterManager : NSObject

+ (id)createLivePushJSAdapterWithId:(unsigned int)a0 configs:(id)a1 preview:(id)a2 appId:(id)a3 delegate:(id)a4;
+ (id)createLivePlayJSAdapterWithId:(unsigned int)a0 configs:(id)a1 containerView:(id)a2 appId:(id)a3 delegate:(id)a4;

@end
