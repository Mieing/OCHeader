@class NSDictionary;

@interface IESLiveAnnotationManager : NSObject

@property (retain, nonatomic) NSDictionary *rpcService2nativeService;
@property (retain, nonatomic) NSDictionary *nativeRpcService;
@property (retain, nonatomic) NSDictionary *lynxRpcService;
@property (retain, nonatomic) NSDictionary *dynamicRpcService;

+ (id)sharedInstance;

- (id)dataWithRoot:(id)a0;
- (id)getAioLinkServiceToProtocol;
- (id)getAnnotationModel:(Class)a0 onRoot:(id)a1 withKey:(id)a2;
- (void).cxx_destruct;

@end
