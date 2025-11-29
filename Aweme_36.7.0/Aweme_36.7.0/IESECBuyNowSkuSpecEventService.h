@protocol YataInstanceInterface;

@interface IESECBuyNowSkuSpecEventService : NSObject

@property (weak, nonatomic) id<YataInstanceInterface> yataInstanceObj;

+ (id)calSelectedSpecs:(id)a0;
+ (void)updateStatusInfoWithEventData:(id)a0 sessionId:(id)a1;

- (void)calCurSkuIdToUpdateWithEventData:(id)a0;
- (void)handleSelectionStateWithGlobalData:(id)a0 specsNodeFields:(id)a1 nextEventName:(id)a2 renderObject:(id)a3 activeView:(id)a4 layoutOptimize:(BOOL)a5;
- (void).cxx_destruct;

@end
