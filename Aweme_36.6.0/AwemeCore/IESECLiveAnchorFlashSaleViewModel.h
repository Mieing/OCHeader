@class IESECLiveApi, IESECLiveRoomContext, NSString, NSDictionary, IESECLiveCountDownView, NSNumber;

@interface IESECLiveAnchorFlashSaleViewModel : NSObject

@property (retain, nonatomic) IESECLiveApi *api;
@property (retain, nonatomic) IESECLiveRoomContext *roomContext;
@property (copy, nonatomic) NSString *shopID;
@property (copy, nonatomic) NSString *lastCategoryName;
@property (copy, nonatomic) NSString *lastCategoryCids;
@property (retain, nonatomic) IESECLiveCountDownView *countDownView;
@property (copy, nonatomic) NSDictionary *lastProperties;
@property (retain, nonatomic) NSNumber *isFlashSaleAuth;
@property (nonatomic) BOOL isFlashSaleEntranceOpen;
@property (nonatomic) BOOL isFlashSaleEntranceShow;
@property (nonatomic) BOOL purchaseReturn;
@property (nonatomic) BOOL skuAuth;
@property (retain, nonatomic) NSNumber *lastSKUState;
@property (copy, nonatomic) id /* block */ setEntranceViewShow;
@property (copy, nonatomic) id /* block */ showFlashSaleView;
@property (nonatomic) BOOL useHybridFlashSale;

- (void)clickFlashSaleEntrance:(id)a0 userName:(id)a1;
- (void)p_trackOnClickFlashSaleEntrance:(id)a0;
- (void)fetchFlashSaleAuthWithCompletion:(id /* block */)a0;
- (void)p_clickFlashSaleEntrance:(id)a0 userName:(id)a1;
- (void)takeShotForPixelBuffer:(struct __CVBuffer { } *)a0 completeHandle:(id /* block */)a1;
- (void)takeShotForView:(id)a0 completeHandle:(id /* block */)a1;
- (void)startScreenShotsCountDownWithCompletion:(id /* block */)a0;
- (BOOL)couldShowFlashSaleEntrance:(BOOL)a0;
- (id)initWithAPI:(id)a0 roomContext:(id)a1;
- (void)setEntranceState:(BOOL)a0;
- (void).cxx_destruct;

@end
