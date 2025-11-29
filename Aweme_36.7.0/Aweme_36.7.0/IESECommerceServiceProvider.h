@class NSMutableArray, NSMutableDictionary, NSMapTable;

@interface IESECommerceServiceProvider : NSObject

@property (retain, nonatomic) NSMutableDictionary *serviceMap;
@property (retain, nonatomic) NSMapTable *weakTable;
@property (retain, nonatomic) NSMutableArray *components;

- (void)unRegisterService:(id)a0;
- (id)implForProtocol:(id)a0;
- (void)registerService:(id)a0 forProtocol:(id)a1 weak:(BOOL)a2;
- (void)registerComponent:(id)a0;
- (void)unRegisterComponent:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
