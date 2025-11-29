@class NSMutableDictionary;

@interface IESECLigoRouter : NSObject

@property (retain, nonatomic) NSMutableDictionary *routeMap;

+ (void)registerLigoRouter:(id)a0 handler:(id /* block */)a1;
+ (id)loadTemplatePath:(id)a0 model:(id)a1 completion:(id /* block */)a2;
+ (id)sharedInstance;

- (void).cxx_destruct;

@end
