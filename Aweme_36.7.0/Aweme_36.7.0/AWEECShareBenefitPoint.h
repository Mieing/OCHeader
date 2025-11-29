@class NSString, NSNumber;

@interface AWEECShareBenefitPoint : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *contactId;
@property (copy, nonatomic) NSString *des;
@property (retain, nonatomic) NSNumber *index;
@property (nonatomic) long long crowdType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
