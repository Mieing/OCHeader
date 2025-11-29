@class AWEJumpToMallBasicObject, NSMutableArray;

@interface AWEECGrowGrassPitayaManager : NSObject

@property (retain, nonatomic) NSMutableArray *handlers;
@property (retain, nonatomic) AWEJumpToMallBasicObject *basicInfo;

- (void)registerNotification;
- (void)registerPitayaMessageHandler;
- (void)runPitayaWithBussinessName:(id)a0 params:(id)a1 callback:(id /* block */)a2;
- (void)getLeafProductsInfoWithProductIds:(id)a0 completion:(id /* block */)a1;
- (void)onCommentAddNotification:(id)a0;
- (void)storeLastGrowGrassInfoWithType:(id)a0 awemeID:(id)a1;
- (void)storeCommentToPitaya:(id)a0 isPurchaseIntention:(BOOL)a1;
- (void)checkIsPurchaseComment:(id)a0 completion:(id /* block */)a1;
- (void)runPitayaTaskWithComment:(id)a0;
- (BOOL)checkIsImageVideoWithModel:(id)a0;
- (void)identifyImageGrowGrass;
- (void).cxx_destruct;
- (id)init;
- (void)addHandler:(id)a0;

@end
