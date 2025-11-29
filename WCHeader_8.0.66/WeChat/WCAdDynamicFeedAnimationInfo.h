@class NSString, NSArray;

@interface WCAdDynamicFeedAnimationInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSString *animationId;
@property (retain, nonatomic) NSString *event;
@property (nonatomic) double commonStartDelay;
@property (nonatomic) double commonDuration;
@property (retain, nonatomic) NSString *commonInterpolator;
@property (retain, nonatomic) NSArray *modifiedProperty;
@property (nonatomic) BOOL repeat;
@property (nonatomic) double repeatInterval;
@property (nonatomic) int repeatCount;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;
+ (id)modelContainerPropertyMappingForConfigTag:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isValid;
- (BOOL)parseModifiedPropertiesWithBasicWidth:(int)a0 basicRootFontSize:(int)a1;
- (void)processWithInfluentAnimations:(id)a0;
- (void)mergeInfoWithInfluentAnimation:(id)a0;
- (void)resetPropertiesWithInfluentAnimation:(id)a0;
- (void)resetPropertyWithPropertyName:(id)a0;
- (void).cxx_destruct;

@end
