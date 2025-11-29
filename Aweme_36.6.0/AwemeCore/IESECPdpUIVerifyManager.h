@class NSMutableSet, IESECGoodsDetailPageContext;

@interface IESECPdpUIVerifyManager : NSObject

@property (weak, nonatomic) IESECGoodsDetailPageContext *pageContext;
@property (retain, nonatomic) NSMutableSet *didHandledMap;

- (void)handlePdpViewOCRVerify:(id)a0 sliceId:(id)a1 verify:(id)a2;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
