@class NSString, NSArray;

@interface IESECShopDividerLineConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long lineType;
@property (copy, nonatomic) NSString *lineColor;
@property (copy, nonatomic) NSString *specialLineColor;
@property (nonatomic) double lineWidth;
@property (copy, nonatomic) NSArray *lineStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
