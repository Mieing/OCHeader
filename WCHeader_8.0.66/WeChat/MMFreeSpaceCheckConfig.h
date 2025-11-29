@class NSString;

@interface MMFreeSpaceCheckConfig : NSObject <PBCoding>

@property (nonatomic) unsigned int m_lastLowAlertTime;
@property (nonatomic) unsigned int m_lastLowerAlertTime;
@property (nonatomic) unsigned int m_lastLowestAlertTime;
@property (nonatomic) unsigned int m_lowAlertTimeInterval;
@property (nonatomic) unsigned int m_lastCheckOtherUserUsedSpaceTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_m_lastLowAlertTime;
+ (void)PBArrayAdd_m_lastLowerAlertTime;
+ (void)PBArrayAdd_m_lastLowestAlertTime;
+ (void)PBArrayAdd_m_lowAlertTimeInterval;
+ (void)PBArrayAdd_m_lastCheckOtherUserUsedSpaceTime;
+ (void)initialize;

- (id)getPBPropertyTable;

@end
