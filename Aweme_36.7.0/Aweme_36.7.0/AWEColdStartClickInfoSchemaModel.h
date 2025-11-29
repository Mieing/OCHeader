@class NSString;

@interface AWEColdStartClickInfoSchemaModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *query_schema;
@property (copy, nonatomic) NSString *client_extra;
@property (copy, nonatomic) NSString *guide_reference;
@property (copy, nonatomic) NSString *isAdUser;
@property (copy, nonatomic) NSString *isHitAb;
@property (copy, nonatomic) NSString *isLandingTime;
@property (copy, nonatomic) NSString *materialClickTime;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
