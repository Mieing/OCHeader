@class NSArray;

@interface WCAdExpParamsInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSArray *params;

+ (id)modelContainerPropertyMappingForConfigTag:(id)a0;
+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
