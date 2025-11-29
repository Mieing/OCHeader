@class NSArray, NSDictionary, IESECURLModel, NSString;

@interface IESECShopGoodsCardCoverImageInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSDictionary *margin;
@property (retain, nonatomic) NSArray *UIConfig;
@property (retain, nonatomic) IESECURLModel *image;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
