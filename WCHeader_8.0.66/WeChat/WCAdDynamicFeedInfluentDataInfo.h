@class NSArray, NSDictionary;

@interface WCAdDynamicFeedInfluentDataInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSArray *elementInfos;
@property (retain, nonatomic) NSArray *animations;
@property (retain, nonatomic) NSDictionary *influentElementInfos;
@property (retain, nonatomic) NSDictionary *influentAnimations;

+ (id)modelContainerPropertyMappingForConfigTag:(id)a0;
+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
