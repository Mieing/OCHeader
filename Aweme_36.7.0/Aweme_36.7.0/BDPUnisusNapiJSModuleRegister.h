@class NSMutableSet;

@interface BDPUnisusNapiJSModuleRegister : NSObject

@property (retain, nonatomic) NSMutableSet *classes;

+ (id)sharedInstance;

- (void)registerUnisusModuleClass:(Class)a0;
- (void).cxx_destruct;

@end
