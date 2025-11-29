@class NSString, IESECURLModel;

@interface IESECShopFlagshipStyle : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECURLModel *icon;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *color;
@property (retain, nonatomic) IESECURLModel *background;
@property (nonatomic) long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
