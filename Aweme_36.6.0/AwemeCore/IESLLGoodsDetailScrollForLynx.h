@class BDXBridgeEventSubscriber, NSNumber, NSString;

@interface IESLLGoodsDetailScrollForLynx : LynxUI

@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (retain, nonatomic) NSNumber *preDistance;
@property (retain, nonatomic) NSString *pageSessionID;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__561;

- (void)emitEvent:(id)a0 detail:(id)a1;
- (void)setPageSessionID:(id)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (id)createView;

@end
