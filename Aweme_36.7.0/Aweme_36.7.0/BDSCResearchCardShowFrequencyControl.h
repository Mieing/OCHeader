@class NSString;

@interface BDSCResearchCardShowFrequencyControl : NSObject <BDModelCustom>

@property (nonatomic) long long days;
@property (nonatomic) long long maxShowTimes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;


@end
