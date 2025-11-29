@class NSString;

@interface BDSCUserAction : NSObject <BDModelCustom>

@property (nonatomic) long long startSearchCount;
@property (nonatomic) long long startSearchSessionCount;
@property (nonatomic) long long searchSuccessSessionCount;
@property (nonatomic) long long playCount;
@property (nonatomic) long long showResearchCardCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;


@end
