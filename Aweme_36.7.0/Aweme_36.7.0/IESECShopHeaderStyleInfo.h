@class NSString, IESECURLModel, NSNumber;

@interface IESECShopHeaderStyleInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECURLModel *headerBackgroundImg;
@property (copy, nonatomic) NSString *primaryColor;
@property (copy, nonatomic) NSString *secondaryColor;
@property (retain, nonatomic) NSNumber *transparency;
@property (nonatomic) unsigned long long shopUITheme;
@property (copy, nonatomic) NSString *navbarTextColor;
@property (copy, nonatomic) NSString *searchBarBackColor;
@property (copy, nonatomic) NSString *indicatorColor;
@property (nonatomic) double maskAlpha;
@property (nonatomic) unsigned long long splitRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
