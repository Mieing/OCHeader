@class NSMutableDictionary;

@interface IESECRouterIntercept : NSObject

@property (class, readonly, nonatomic) NSMutableDictionary *interceptMap;

+ (void)registerRouterInterceptBlock:(id /* block */)a0 forPath:(id)a1;
+ (BOOL)transferTo:(id)a0 withTransfer:(id)a1;

@end
