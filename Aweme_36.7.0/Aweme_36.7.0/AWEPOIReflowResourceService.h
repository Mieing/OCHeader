@class NSMutableDictionary, NSMutableArray;

@interface AWEPOIReflowResourceService : NSObject

@property (retain, nonatomic) NSMutableDictionary *configs;
@property (retain, nonatomic) NSMutableArray *components;
@property (nonatomic) BOOL bInterceptor;

- (id)aweNearbyUtilManager;
- (void)setupReflowConfig;
- (void)filterReflowComponent;
- (void)setupReflowComponent;
- (id)shareReflowComponent;
- (id)findReflowComponentWithSchema:(id)a0;
- (BOOL)switchRouterWithComponent:(id)a0 schema:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
