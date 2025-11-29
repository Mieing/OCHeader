@class NSString, NSNumber;

@interface IESLLLiveMinusSaleModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *minusSaleId;
@property (copy, nonatomic) NSNumber *allianceTaskId;
@property (copy, nonatomic) NSNumber *minusActivityId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
