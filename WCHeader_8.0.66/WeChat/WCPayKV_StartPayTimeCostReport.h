@interface WCPayKV_StartPayTimeCostReport : NSObject

@property (nonatomic) unsigned long long m_appLaunchTime;
@property (nonatomic) unsigned long long m_logicStartTime;
@property (nonatomic) unsigned long long m_logicNetworkEndTime;
@property (nonatomic) unsigned long long m_logicShowViewTime;
@property (nonatomic) unsigned long long m_isFirstLaunch;
@property (nonatomic) unsigned long long m_hasLogNoOrderViewTime;

+ (id)shareInstance;

- (void)recordLaunchTime;
- (void)recordFirstLaunch;
- (void)recordLogicStartTime;
- (void)recordLogicNetworkEndTime;
- (void)recordLogicShowViewTime;
- (void)recordLogicShowViewNoOrderViewTime;
- (void)reportWithScene:(unsigned int)a0;
- (void)clearWhenLogicStop;

@end
