@class NSNumber, NSString, IESECURLModel;

@interface IESECGoodsBrandPromise : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSNumber *brandType;
@property (copy, nonatomic) NSString *brandName;
@property (copy, nonatomic) NSString *brandIcon;
@property (copy, nonatomic) NSString *shopPromise;
@property (copy, nonatomic) NSString *shopPromiseTextColor;
@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *arrowColor;
@property (copy, nonatomic) NSString *dividerColor;
@property (retain, nonatomic) IESECURLModel *iconStruct;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
