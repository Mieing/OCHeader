@class NSString, IESECServiceProxy, IESECQualityInfoV2, NSMutableArray;
@protocol IESECShopForwardCoService;

@interface IESECShopMonitorService : IESECShopService <IESECShopMonitorService> {
    BOOL _asyncRenderCollecting;
    NSMutableArray *_asyncRenderCollector;
}

@property (retain, nonatomic) IESECServiceProxy<IESECShopForwardCoService> *forwardCoService;
@property (readonly, nonatomic) IESECQualityInfoV2 *qualityInfo;
@property (copy, nonatomic) id /* block */ asyncRenderCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)traceRenderStart;
- (void)initMonitorService;
- (void)traceFirstPaint;
- (void)traceReqStart;
- (void)tracePageInitStart;
- (void)tracePageInitEnd;
- (void)traceRouteStart:(double)a0;
- (void)traceRenderInfoStart;
- (void)traceRenderInfoEnd;
- (void)traceRenderAsyncInfoEnd;
- (double)getPageInitStartTime;
- (void)startAsyncRenderCollect;
- (void)endAsyncRenderCollect;
- (BOOL)collectedAsyncRenderItemsCompleted;
- (id)autoCollectAsyncRenderItem;
- (void)collectedAsyncRenderItemsDidComplete;
- (void)asyncRenderItem:(id)a0 didComplete:(BOOL)a1;
- (void).cxx_destruct;

@end
