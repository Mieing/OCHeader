@class NSString, NSArray;

@interface AWEDeliveryChatDeliveryInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *deliveryContent;
@property (copy, nonatomic) NSString *locationContent;
@property (copy, nonatomic) NSString *onTapScheme;
@property (copy, nonatomic) NSArray *etaInfoArr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)etaInfoArrJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
