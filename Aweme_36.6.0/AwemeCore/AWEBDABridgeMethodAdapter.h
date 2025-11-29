@class NSString;

@interface AWEBDABridgeMethodAdapter : HTSService <AWEBDABridgeMethodAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)adGetFeatureCallWithParamModel:(id)a0 completionHandler:(id /* block */)a1 model:(id)a2;
+ (void)adGetPortraitCallWithParamModel:(id)a0 completionHandler:(id /* block */)a1 model:(id)a2;
+ (id)satiParamsForPitayaCommerce:(id)a0;
+ (void)recordAwemeResponseWithSatiParamsForPitayaCommerce:(id)a0 params:(id)a1;
+ (void)adGetFeatureCallWithParam:(id)a0 completionHandler:(id /* block */)a1 model:(id)a2;
+ (void)adGetPortraitCallWithParam:(id)a0 completionHandler:(id /* block */)a1 model:(id)a2;


@end
