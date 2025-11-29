@class NSString, NSArray;

@interface WCAdDynamicFeedInfluentElementInfo : WCAdDynamicFeedElementInfo

@property (retain, nonatomic) NSString *isNormalStyleString;
@property (retain, nonatomic) NSString *hideForElderModeString;
@property (retain, nonatomic) NSArray *propertiesToReset;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
