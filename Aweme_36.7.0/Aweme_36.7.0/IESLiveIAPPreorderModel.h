@class IESLiveIAPPayModel, DiamondBuyResult;

@interface IESLiveIAPPreorderModel : NSObject

@property (retain, nonatomic) IESLiveIAPPayModel *iapPayModel;
@property (retain, nonatomic) DiamondBuyResult *diamondBuyResult;
@property (nonatomic) double orderTime;

- (id)initWithIapPayModel:(id)a0 diamondBuyResult:(id)a1 orderTime:(double)a2;
- (void).cxx_destruct;

@end
