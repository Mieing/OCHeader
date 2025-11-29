@class NSString;

@interface IESECLiveDispatchEventProductInfo : IESECLiveDispatchEventBase

@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *promotionID;
@property (retain, nonatomic) id goodsModel;

- (id)initWithEventName:(id)a0 productID:(id)a1 promotionID:(id)a2;
- (void).cxx_destruct;
- (long long)type;
- (id)eventData;

@end
