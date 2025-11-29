@class NSString, NSArray, IESECURLModel;

@interface IESECGoodsPropertyItemModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *attributes;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long contentMaxLines;
@property (retain, nonatomic) IESECURLModel *logo;
@property (copy, nonatomic) NSArray *authImageList;
@property (copy, nonatomic) NSString *authName;
@property (copy, nonatomic) NSString *authType;
@property (copy, nonatomic) NSString *authPageTitle;
@property (nonatomic) BOOL certificationNewDesign;
@property (copy, nonatomic) NSString *certificationUrl;
@property (retain, nonatomic) IESECURLModel *certificationIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)authImageListJSONTransformer;
+ (id)attributesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
