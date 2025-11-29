@class NSString;

@interface BDSCResearchCardShowStrategy : NSObject <BDModelCustom>

@property (nonatomic) long long userType;
@property (copy, nonatomic) NSString *castUserType;
@property (nonatomic) long long searchCountToday;
@property (nonatomic) long long consecutiveSearchFailedCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelPropertyBlacklist;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
