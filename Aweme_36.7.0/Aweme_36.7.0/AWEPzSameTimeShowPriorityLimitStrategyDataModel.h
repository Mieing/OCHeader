@class NSString;

@interface AWEPzSameTimeShowPriorityLimitStrategyDataModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long countLimit;
@property (nonatomic) long long threshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setDataDefault;
- (BOOL)isValid;

@end
