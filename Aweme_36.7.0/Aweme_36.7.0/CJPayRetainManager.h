@class CJPayGrowthDecisionModel;
@protocol CJPayRetainTrackerProtocol;

@interface CJPayRetainManager : NSObject

@property (weak, nonatomic) id<CJPayRetainTrackerProtocol> trackDelegate;
@property (retain, nonatomic) CJPayGrowthDecisionModel *growthDecisionModel;
@property (nonatomic) BOOL isLeftTopCloseShow;
@property (nonatomic) BOOL isLeftTopBackShow;

- (void)event:(id)a0 params:(id)a1;
- (id)contactToDataDictWithResponse:(id)a0 contactInfo:(id)a1;
- (void)p_showNativeVC:(id)a0 sourceVC:(id)a1 retainEventCallBack:(id /* block */)a2;
- (void)p_showLynxVC:(id)a0 enterParams:(id)a1 retParams:(id)a2 lynxScheme:(id)a3 retainEventCallBack:(id /* block */)a4;
- (void)fetchRetainData:(id)a0 enterParams:(id)a1 isSyncRequest:(BOOL)a2 callback:(id /* block */)a3;
- (void)showRetainPage:(id)a0 enterParams:(id)a1 isSyncRequest:(BOOL)a2 showCallBack:(id /* block */)a3 retainEventCallBack:(id /* block */)a4;
- (void).cxx_destruct;

@end
