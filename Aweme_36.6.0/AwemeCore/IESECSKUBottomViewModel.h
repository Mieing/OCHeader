@class NSString, IESECSKUDetailContext, IESECSKUModel, NSArray, IESECSKUButtonTipModel;

@interface IESECSKUBottomViewModel : NSObject <IESECSKUViewModelProtocol>

@property (retain, nonatomic) IESECSKUModel *skuModel;
@property (retain, nonatomic) IESECSKUDetailContext *detailContext;
@property (readonly, nonatomic) BOOL isShowCountDown;
@property (readonly, copy, nonatomic) NSString *countdownInfo;
@property (nonatomic) long long endInterval;
@property (nonatomic) long long serverInterval;
@property (readonly, copy, nonatomic) NSArray *buttonModels;
@property (readonly, copy, nonatomic) NSString *curSkuID;
@property (readonly, nonatomic) IESECSKUButtonTipModel *buttonTip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isDepositPresale;
- (void)skuModuleShow:(id)a0 extra:(id)a1 once:(BOOL)a2;
- (void)initServerInterval;
- (id)p_curSKUInfo;
- (void)skuModuleClick:(id)a0 extra:(id)a1;
- (id)initWithSKUModel:(id)a0 detailContext:(id)a1;
- (id)selectedTotalPrice;
- (void).cxx_destruct;

@end
