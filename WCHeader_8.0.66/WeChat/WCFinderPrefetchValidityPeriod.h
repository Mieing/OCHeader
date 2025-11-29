@interface WCFinderPrefetchValidityPeriod : NSObject

@property (nonatomic) unsigned long long validityPeriodOfFollowTab;
@property (nonatomic) unsigned long long validityPeriodOfFriendTab;
@property (nonatomic) unsigned long long validityPeriodOfMachineTab;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (id)init;

@end
