@class NSString;

@interface IESECInternalFlowPageStyleModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long shadow;
@property (nonatomic) long long bgHighLight;
@property (nonatomic) long long slideStyle;
@property (nonatomic) BOOL headerCartDisplay;
@property (nonatomic) long long shouldShowMallEntrance;
@property (nonatomic) long long immerseHeaderSearchDisplay;
@property (nonatomic) long long commentStyle;
@property (nonatomic) long long sameProductStyle;
@property (nonatomic) long long sameProductSwitch;
@property (nonatomic) BOOL authorCommissionSwitch;
@property (nonatomic) long long pageInternalFlowStyle;
@property (copy, nonatomic) NSString *headerText;
@property (copy, nonatomic) NSString *noProductText;
@property (copy, nonatomic) NSString *noMoreProductText;
@property (nonatomic) unsigned long long listStyle;
@property (nonatomic) long long searchShow;
@property (nonatomic) long long searchShowPosition;
@property (nonatomic) long long searchResourceStyle;
@property (nonatomic) long long searchCardFrequency;
@property (nonatomic) long long windowEntryPriority;
@property (copy, nonatomic) NSString *headerCouponSchema;
@property (copy, nonatomic) NSString *headerCouponHalfScreenSchema;
@property (nonatomic) long long headerCouponDisplay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
