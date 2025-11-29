@class NSString, IESECURLModel, NSArray;

@interface IESECShopTagListUIConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) double height;
@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *specialBackgroundColor;
@property (retain, nonatomic) IESECURLModel *backgroundImage;
@property (retain, nonatomic) IESECURLModel *specialBackgroundImage;
@property (nonatomic) BOOL hasBorder;
@property (copy, nonatomic) NSString *borderColor;
@property (copy, nonatomic) NSString *specialBorderColor;
@property (nonatomic) double borderWidth;
@property (copy, nonatomic) NSArray *radiusList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
