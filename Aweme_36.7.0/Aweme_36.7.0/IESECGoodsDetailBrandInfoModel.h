@class NSString, IESECURLModel;

@interface IESECGoodsDetailBrandInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECURLModel *brandIcon;
@property (nonatomic) BOOL isBrand;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
