@interface WACgiService : NSObject

+ (Class)externalIMP;
+ (void)setExternalIMP:(Class)a0;
+ (unsigned int)sendCgi:(id)a0 completion:(id /* block */)a1;
+ (unsigned int)sendCgiDirectlyWithoutServiceRoute:(id)a0 completion:(id /* block */)a1;
+ (unsigned int)sendCgi:(id)a0 uiCgi:(unsigned int)a1 reqData:(id)a2 completion:(id /* block */)a3;
+ (BOOL)checkShouldRouteToServiceWhenWeakNet:(id)a0;
+ (unsigned int)sendCgiToService:(id)a0 completion:(id /* block */)a1;
+ (unsigned int)genServiceRouteCgiSerialNum;
+ (void)cancelCgiRequest:(unsigned int)a0;
+ (void)invalidateAllRequest;

@end
