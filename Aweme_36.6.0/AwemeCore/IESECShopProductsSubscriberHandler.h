@class NSString, IESECShopProductsHybridContext;
@protocol IESECShopProductsSubscriberHandlerDelegate;

@interface IESECShopProductsSubscriberHandler : NSObject {
    IESECShopProductsHybridContext *_context;
}

@property (weak, nonatomic) id<IESECShopProductsSubscriberHandlerDelegate> delegate;
@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *productName;
@property (nonatomic) long long startTime;

- (void)handleSubscribeWithParams:(id)a0;
- (void)handleProductSubscribeClick;
- (BOOL)isAppointed;
- (void)updateProductNotifyStatus;
- (void)AppointCalendarWithTitle:(id)a0 desc:(id)a1 toast:(id)a2;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
