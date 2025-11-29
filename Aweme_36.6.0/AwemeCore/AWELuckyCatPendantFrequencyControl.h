@class NSString;

@interface AWELuckyCatPendantFrequencyControl : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long showSeconds;
@property (nonatomic) long long showMillis;
@property (copy, nonatomic) NSString *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
