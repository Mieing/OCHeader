@protocol IESECLiveGoodsStatusModel;

@interface IESECLiveGoodsStatusBuilder : NSObject

@property (weak, nonatomic) id<IESECLiveGoodsStatusModel> statusModel;

- (long long)goodsStatus;
- (long long)stockStatus;
- (long long)saleStatusAudience;
- (id)statusHintForAudience;
- (long long)saleStatusAnchor;
- (id)initWithStatusModel:(id)a0;
- (id)statusHintForAnchor;
- (void).cxx_destruct;

@end
