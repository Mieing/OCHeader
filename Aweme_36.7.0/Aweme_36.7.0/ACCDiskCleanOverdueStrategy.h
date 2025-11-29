@class NSString;
@protocol ACCDiskCleanStrategyConfigProtocol;

@interface ACCDiskCleanOverdueStrategy : NSObject <ACCDiskCleanStrategyProtocol>

@property (nonatomic) double ttl;
@property (nonatomic) double interval;
@property (readonly, nonatomic) id<ACCDiskCleanStrategyConfigProtocol> config;
@property (readonly, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)caculateRecentlyDateWithFile:(id)a0;
- (id)itemsToCleanWithPath:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
