@class IESECSKUDetailContext, IESECSKUModel, NSArray, NSString, NSMutableArray;

@interface IESECSKUCouponViewModel : NSObject <IESECSKUViewModelProtocol>

@property (retain, nonatomic) IESECSKUModel *skuModel;
@property (retain, nonatomic) IESECSKUDetailContext *detailContext;
@property (retain, nonatomic) NSMutableArray *defaultCouponTags;
@property (copy, nonatomic) NSArray *couponTags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSKUModel:(id)a0 detailContext:(id)a1;
- (void).cxx_destruct;

@end
