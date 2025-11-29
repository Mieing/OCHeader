@class NSString;

@interface AWEGuideLimitActionModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long actionType;
@property (nonatomic) long long accumulativeCount;
@property (nonatomic) long long accumulativeExpire;
@property (nonatomic) long long effectDuration;
@property (nonatomic) BOOL isAccumulation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
