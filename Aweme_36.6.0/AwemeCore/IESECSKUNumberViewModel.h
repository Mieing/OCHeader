@class IESECSKUDetailContext, IESECSKUModel, NSString, NSNumber;

@interface IESECSKUNumberViewModel : NSObject <IESECSKUViewModelProtocol>

@property (retain, nonatomic) IESECSKUModel *skuModel;
@property (retain, nonatomic) IESECSKUDetailContext *detailContext;
@property (retain, nonatomic) NSNumber *lastSelectedCount;
@property (readonly, copy, nonatomic) NSString *limit;
@property (readonly, copy, nonatomic) NSString *stockDesc;
@property (readonly, nonatomic) unsigned long long number;
@property (readonly, copy, nonatomic) NSString *minLimitToast;
@property (readonly, copy, nonatomic) NSString *limitToast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackWithEventName:(id)a0;
- (void)skuModuleClick:(id)a0 extra:(id)a1;
- (id)initWithSKUModel:(id)a0 detailContext:(id)a1;
- (BOOL)canMinus;
- (BOOL)canPlus;
- (void)updateSKUInfoAfterSelectedCountChangedIfNeeded;
- (void)checkGivenProductStock;
- (void)plusNumber;
- (void)minusNumber;
- (void).cxx_destruct;

@end
