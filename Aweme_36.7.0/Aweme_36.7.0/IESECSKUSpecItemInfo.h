@class NSString, IESECURLModel;

@interface IESECSKUSpecItemInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *id;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL isHotSaleDefaultSelect;
@property (retain, nonatomic) IESECURLModel *icon;
@property (copy, nonatomic) NSString *price;
@property (nonatomic) long long status;
@property (nonatomic) long long index;
@property (copy, nonatomic) NSString *cornerText;
@property (copy, nonatomic) NSString *cornerTextColor;
@property (copy, nonatomic) NSString *cornerBGColor;
@property (nonatomic) BOOL isGreyStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
