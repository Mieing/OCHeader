@class NSNumber, NSString;

@interface AFDRecommendReasonStylePosition : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *start;
@property (retain, nonatomic) NSNumber *end;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
