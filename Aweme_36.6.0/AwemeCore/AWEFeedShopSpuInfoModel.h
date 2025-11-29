@class NSString, AWEURLModel;

@interface AWEFeedShopSpuInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *price;
@property (copy, nonatomic) NSString *originPrice;
@property (copy, nonatomic) NSString *spuName;
@property (retain, nonatomic) AWEURLModel *headImage;
@property (copy, nonatomic) NSString *spuId;
@property (copy, nonatomic) NSString *discount;
@property (copy, nonatomic) NSString *content;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
