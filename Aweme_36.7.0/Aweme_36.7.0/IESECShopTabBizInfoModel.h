@class NSString, IESECShopTabStyleInfo, IESECShopTabBadgeInfo, NSDictionary, NSNumber;

@interface IESECShopTabBizInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long tabContainerType;
@property (retain, nonatomic) IESECShopTabStyleInfo *tabStyleInfo;
@property (retain, nonatomic) IESECShopTabBadgeInfo *tabBadgeInfo;
@property (copy, nonatomic) NSString *tabHintText;
@property (retain, nonatomic) NSNumber *tabHintDuration;
@property (copy, nonatomic) NSString *jumpURL;
@property (copy, nonatomic) NSString *toast;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (copy, nonatomic) NSString *passThroughFE;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
