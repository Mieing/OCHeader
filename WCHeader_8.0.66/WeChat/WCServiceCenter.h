@class NSMutableDictionary;

@interface WCServiceCenter : NSObject

@property (readonly, nonatomic) NSMutableDictionary *serviceData;

+ (id)center;

- (id)init;
- (BOOL)registerService:(Class)a0 forProtocol:(id)a1;
- (Class)serviceForProtocol:(id)a0;
- (BOOL)unregisterServiceForProtocol:(id)a0;
- (void).cxx_destruct;

@end
