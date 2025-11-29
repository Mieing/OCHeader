@class NSString, NSNumber;

@interface AWEPOIRateCardExpModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *expName;
@property (retain, nonatomic) NSNumber *expGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
