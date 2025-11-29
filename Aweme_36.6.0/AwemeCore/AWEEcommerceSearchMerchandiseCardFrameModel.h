@class AWEEcommerceSearchLongPressModel, NSString;

@interface AWEEcommerceSearchMerchandiseCardFrameModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEEcommerceSearchLongPressModel *longPressPanelModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)longPressPanelModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
