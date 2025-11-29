@class NSArray, NSString, NSDictionary;

@interface AWETheaterCardDescriptionModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *paramName;
@property (nonatomic) BOOL isArray;
@property (nonatomic) long long spanSize;
@property (nonatomic) long long cardType;
@property (copy, nonatomic) NSString *arrayTitle;
@property (copy, nonatomic) NSDictionary *cardTypeDic;
@property (copy, nonatomic) NSString *cardDescriptionTypeKeyName;
@property (nonatomic) long long cardDescriptionTypeKeyValue;
@property (copy, nonatomic) NSArray *subParamName;
@property (copy, nonatomic) NSArray *schemaParamName;
@property (nonatomic) double marginLeft;
@property (nonatomic) double marginTop;
@property (nonatomic) double marginRight;
@property (nonatomic) double marginBottom;
@property (nonatomic) double lineSpacing;
@property (nonatomic) double interitemSpacing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
