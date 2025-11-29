@class NSString, NSArray;

@interface IESECShopTagContainerUIConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double height;
@property (nonatomic) double leftMargin;
@property (nonatomic) double rightMargin;
@property (nonatomic) double topMargin;
@property (nonatomic) double bottomMargin;
@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *specialBackgroundColor;
@property (nonatomic) BOOL hasBorder;
@property (copy, nonatomic) NSString *borderColor;
@property (copy, nonatomic) NSString *specialBorderColor;
@property (nonatomic) double borderWidth;
@property (copy, nonatomic) NSArray *radiusList;
@property (nonatomic) BOOL rightAlignment;
@property (nonatomic) BOOL matchParent;
@property (nonatomic) unsigned long long elementAlignment;
@property (nonatomic) double maxWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
