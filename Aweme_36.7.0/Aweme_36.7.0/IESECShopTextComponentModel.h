@class UIColor, NSString, NSArray, IESECShopComponentBorderConfig;

@interface IESECShopTextComponentModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *specialTextColor;
@property (retain, nonatomic) UIColor *textUIColor;
@property (nonatomic) double fontSize;
@property (nonatomic) double fontWidth;
@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *specialBackgroundColor;
@property (copy, nonatomic) NSArray *radiusList;
@property (retain, nonatomic) IESECShopComponentBorderConfig *borderConfig;
@property (nonatomic) unsigned long long overflowStrategy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
