@class NSString, IESECURLModel, NSArray, NSNumber;

@interface IESECSKUButtonTipModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) IESECURLModel *icon;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *bgColor;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *buttonTextColor;
@property (copy, nonatomic) NSString *buttonBorderColor;
@property (copy, nonatomic) NSString *jumpUrl;
@property (copy, nonatomic) IESECURLModel *buttonIcon;
@property (copy, nonatomic) NSArray *highLightItems;
@property (nonatomic) long long alignmentType;
@property (retain, nonatomic) NSNumber *bottomOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)highLightItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
