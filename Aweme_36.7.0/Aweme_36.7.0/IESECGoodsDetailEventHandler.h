@class NSString, NSDictionary, IESECGoodsDetailCommonMeta, IESECGoodsDetailSKUManager, IESECGoodsDetailPageViewController;
@protocol IESECGoodsDetailEvent;

@interface IESECGoodsDetailEventHandler : NSObject

@property (retain, nonatomic) id<IESECGoodsDetailEvent> event;
@property (copy, nonatomic) NSString *eventID;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (retain, nonatomic) id businessParams;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) IESECGoodsDetailCommonMeta *commonMeta;
@property (retain, nonatomic) IESECGoodsDetailSKUManager *skuManager;
@property (weak, nonatomic) IESECGoodsDetailPageViewController *pageVC;

+ (id)eventComponentID;

- (void)handleEvent:(id)a0 completion:(id /* block */)a1;
- (void)handleEventWithEventID:(id)a0 trackParams:(id)a1 businessParams:(id)a2 completion:(id /* block */)a3;
- (void)forbidPageVCRefresh;
- (id)tracker;
- (void).cxx_destruct;

@end
