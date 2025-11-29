@class NSString;

@interface AWEAntiAddictDayNightThresholdModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long dayBegin;
@property (nonatomic) long long dayEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithDayBegin:(long long)a0 dayEnd:(long long)a1;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isValid;

@end
