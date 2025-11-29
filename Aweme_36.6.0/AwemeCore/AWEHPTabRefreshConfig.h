@class NSNumber, NSString, NSDictionary;

@interface AWEHPTabRefreshConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSNumber *animateType;
@property (copy, nonatomic) NSNumber *maxAnimateDuration;
@property (copy, nonatomic) NSNumber *minAnimateDuration;
@property (copy, nonatomic) NSString *dragRefreshText;
@property (copy, nonatomic) NSDictionary *tabCustomConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isAnimateTypeValid:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isValid;

@end
