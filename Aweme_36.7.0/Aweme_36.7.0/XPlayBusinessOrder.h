@class NSDictionary, NSString;

@interface XPlayBusinessOrder : NSObject <XPlayOrderProtocol>

@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSString *orderId;
@property (nonatomic) long long orderAmount;
@property (copy, nonatomic) NSString *goodsId;
@property (copy, nonatomic) NSString *goodsName;
@property (copy, nonatomic) NSString *uniqueOrderId;
@property (copy, nonatomic) NSString *tradeInfo;
@property (copy, nonatomic) NSString *cpAppId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)orderWithDic:(id)a0;

- (void).cxx_destruct;

@end
