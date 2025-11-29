@class IESECGoodsDetailSliceXEventHandler, NSMutableArray;
@protocol IESECGoodsDetailContainerProtocol;

@interface IESECPdpSchemaSkuEventCenter : NSObject

@property (weak, nonatomic) IESECGoodsDetailSliceXEventHandler *sliceXEventHandler;
@property (weak, nonatomic) id<IESECGoodsDetailContainerProtocol> container;
@property (retain, nonatomic) NSMutableArray *skuSessionIdArr;
@property (nonatomic) BOOL hasRegisteredSubscribe;

- (void)registerSubscribe;
- (void)storeUserActionWithSelectedIDs:(id)a0 selectedSKUID:(id)a1 selectedCount:(id)a2;
- (void)startSubscribeWithSkuSessionId:(id)a0;
- (id)initWithSliceXEventHandler:(id)a0;
- (BOOL)isSkuSessionIdMatchWithEventParams:(id)a0;
- (void).cxx_destruct;

@end
