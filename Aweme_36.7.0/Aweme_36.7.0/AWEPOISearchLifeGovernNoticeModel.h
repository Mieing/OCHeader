@class NSString, NSDictionary;

@interface AWEPOISearchLifeGovernNoticeModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *violationTimeUtc;
@property (copy, nonatomic) NSString *violationReason;
@property (copy, nonatomic) NSString *punishStartTimeUtc;
@property (copy, nonatomic) NSString *punishEndTimeUtc;
@property (copy, nonatomic) NSString *punishmentId;
@property (nonatomic) long long source;
@property (copy, nonatomic) NSString *violationDetailSchema;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
