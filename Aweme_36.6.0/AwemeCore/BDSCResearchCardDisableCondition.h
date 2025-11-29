@class NSString;

@interface BDSCResearchCardDisableCondition : NSObject <BDModelCustom>

@property (nonatomic) long long noConsumeShowTimes;
@property (nonatomic) BOOL needHideIfConsume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;


@end
