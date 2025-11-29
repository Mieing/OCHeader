@class NSString;

@interface AWEAntiAddictToastFreqLimitModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long oncePerXDays;
@property (nonatomic) long long noClickPeriod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isValid;

@end
