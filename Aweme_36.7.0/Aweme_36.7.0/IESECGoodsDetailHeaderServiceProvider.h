@class NSMutableArray, NSMutableDictionary, NSMapTable;

@interface IESECGoodsDetailHeaderServiceProvider : NSObject

@property (retain, nonatomic) NSMutableDictionary *serviceMap;
@property (retain, nonatomic) NSMapTable *weakTable;
@property (retain, nonatomic) NSMutableArray *components;

- (id)implForProtocol:(id)a0;
- (void)registerService:(id)a0 forProtocol:(id)a1 weak:(BOOL)a2;
- (void)registerComponent:(id)a0;
- (id)findComponentWithClass:(Class)a0;
- (void)updateContentComponentWithModel:(id)a0 didHitPDPHalfOptimize:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;

@end
