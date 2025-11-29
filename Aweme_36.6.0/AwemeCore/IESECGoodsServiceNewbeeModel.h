@class NSString, IESECURLModel, NSArray;

@interface IESECGoodsServiceNewbeeModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *urlNewbee;
@property (retain, nonatomic) IESECURLModel *icon;
@property (copy, nonatomic) NSArray *services;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)servicesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
