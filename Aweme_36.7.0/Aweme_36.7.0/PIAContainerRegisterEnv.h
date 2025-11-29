@class NSDictionary;
@protocol PIAInterfaceResourceLoaderProtocol;

@interface PIAContainerRegisterEnv : NSObject

@property (retain, nonatomic) id<PIAInterfaceResourceLoaderProtocol> resourceLoader;
@property (copy, nonatomic) NSDictionary *globalProps;

+ (id)defaultEnv;

- (void).cxx_destruct;

@end
