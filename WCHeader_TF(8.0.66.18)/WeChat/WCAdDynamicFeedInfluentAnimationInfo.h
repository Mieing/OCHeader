@class NSString, NSArray;

@interface WCAdDynamicFeedInfluentAnimationInfo : WCAdDynamicFeedAnimationInfo

@property (retain, nonatomic) NSString *commonStartDelayString;
@property (retain, nonatomic) NSString *commonDurationString;
@property (retain, nonatomic) NSArray *propertiesToReset;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
