@class IESECGoodsDetailHeaderServiceProvider, IESECGoodsDetailSKUManager, IESECGoodsDetailCommonMeta, IESECTracker, NSString, IESECGoodsDetailPageContext, IESECGoodsDetailPageViewController;
@protocol IESECGoodsDetailHeaderTrackerService, IESECGoodsDetailHeaderEventHandlerService;

@interface IESECGoodsDetailHeaderSliceEventHandler : NSObject <IESECSliceXEventForwardDelegate>

@property (weak, nonatomic) IESECGoodsDetailHeaderServiceProvider *serviceProvider;
@property (weak, nonatomic) id<IESECGoodsDetailHeaderEventHandlerService> handler;
@property (weak, nonatomic) id<IESECGoodsDetailHeaderTrackerService> trackerImpl;
@property (weak, nonatomic) IESECGoodsDetailPageContext *pageContext;
@property (weak, nonatomic) IESECTracker *tracker;
@property (weak, nonatomic) IESECGoodsDetailCommonMeta *commonMeta;
@property (weak, nonatomic) IESECGoodsDetailPageViewController *pageVC;
@property (weak, nonatomic) IESECGoodsDetailSKUManager *skuManager;
@property (copy, nonatomic) NSString *pageIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)triggerSliceXEvent:(id)a0;
- (void)triggerEvent:(id)a0;
- (void)triggerEvent:(id)a0 params:(id)a1 actions:(id)a2;
- (void)trackWithEventName:(id)a0 once:(id)a1 params:(id)a2 btmID:(id)a3;
- (void)trackWithEventName:(id)a0 params:(id)a1 btmID:(id)a2;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;

@end
