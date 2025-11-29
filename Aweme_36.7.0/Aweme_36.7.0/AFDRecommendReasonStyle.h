@class AFDRecommendReasonFont, NSString, AFDRecommendReasonStylePosition, NSNumber;

@interface AFDRecommendReasonStyle : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AFDRecommendReasonStylePosition *position;
@property (retain, nonatomic) AFDRecommendReasonFont *font;
@property (retain, nonatomic) NSNumber *styleType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
