@class NSMutableArray, NSObject;
@protocol OS_dispatch_group;

@interface MMLiveStorageCleanupContext : NSObject

@property (nonatomic) unsigned long long contributionStage;
@property (retain, nonatomic) NSMutableArray *deviationDirectives;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *externalCleanupTasksGroup;
@property (nonatomic) unsigned long long externalCleanupContribution;

- (void)addPathToBePreserved:(id)a0;
- (void)addPathToBeCleanedUp:(id)a0;
- (void)addCleanupContributingTask:(id /* block */)a0;
- (void)addDeviationDirectiveWithType:(unsigned long long)a0 forPath:(id)a1;
- (void).cxx_destruct;

@end
