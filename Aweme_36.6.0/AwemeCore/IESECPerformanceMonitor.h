@class NSMutableDictionary;

@interface IESECPerformanceMonitor : NSObject

@property (retain, nonatomic) NSMutableDictionary *renderTimeMultiDic;
@property (retain, nonatomic) NSMutableDictionary *orderSubmitTimeDic;

+ (id)sharedManager;

- (void)addRenderPerformancePointWithPoint:(id)a0;
- (void)reportEnterSubmitOrdersWithSchema:(id)a0;
- (id)getRenderTimeDic;
- (void)buyNowClick;
- (void)addCJPayPerformanceTrackerWithPoint:(id)a0;
- (void)addRenderPerformancePointDic:(id)a0 isClear:(BOOL)a1;
- (id)getRenderSchemaWithSchema:(id)a0;
- (void)orderSubmitClick;
- (void)addOrderSubmitPoint:(id)a0;
- (void)addOrderSubmitPointDic:(id)a0;
- (void).cxx_destruct;

@end
