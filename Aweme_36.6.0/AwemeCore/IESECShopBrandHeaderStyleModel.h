@class NSString, IESECURLModel;

@interface IESECShopBrandHeaderStyleModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECURLModel *headerBgImg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
