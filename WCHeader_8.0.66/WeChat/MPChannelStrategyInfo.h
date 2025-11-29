@class NSString;

@interface MPChannelStrategyInfo : MMObject <PBCoding>

@property (nonatomic) unsigned int timelineInterval;
@property (nonatomic) unsigned int prefetchInterval;
@property (nonatomic) BOOL brandCellExposeUpdate;
@property (nonatomic) BOOL mainSessionExposeUpdate;
@property (nonatomic) BOOL enterBizSessionUpdate;
@property (nonatomic) BOOL enterVideoPageUpdate;
@property (nonatomic) BOOL autoSwitchDefaultLogo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_timelineInterval;
+ (void)PBArrayAdd_prefetchInterval;
+ (void)PBArrayAdd_brandCellExposeUpdate;
+ (void)PBArrayAdd_mainSessionExposeUpdate;
+ (void)PBArrayAdd_enterBizSessionUpdate;
+ (void)PBArrayAdd_enterVideoPageUpdate;
+ (void)PBArrayAdd_autoSwitchDefaultLogo;
+ (void)initialize;

- (id)getPBPropertyTable;

@end
