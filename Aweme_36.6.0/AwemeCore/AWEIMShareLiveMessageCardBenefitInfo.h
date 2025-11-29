@class NSString;

@interface AWEIMShareLiveMessageCardBenefitInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long benefitMainType;
@property (nonatomic) unsigned long long benefitType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *credit;
@property (nonatomic) long long countdownTime;
@property (copy, nonatomic) NSString *iconUrl;
@property (nonatomic) unsigned long long showDetails;
@property (copy, nonatomic) NSString *schema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)updateWithBenefitInfo:(id)a0;
- (void).cxx_destruct;

@end
