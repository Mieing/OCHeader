@class NSString;

@interface WCPayOverseaPayFunctionActivityInfo : NSObject <PBCoding>

@property (retain, nonatomic) NSString *m_activityId;
@property (retain, nonatomic) NSString *m_activityMsgContent;
@property (retain, nonatomic) NSString *m_activityLink;
@property (retain, nonatomic) NSString *m_activityIconLink;
@property (retain, nonatomic) NSString *m_activityJumpFuncId;
@property (retain, nonatomic) NSString *m_activityTips;
@property (nonatomic) unsigned int m_activityExpiredTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_m_activityId;
+ (void)PBArrayAdd_m_activityMsgContent;
+ (void)PBArrayAdd_m_activityLink;
+ (void)PBArrayAdd_m_activityIconLink;
+ (void)PBArrayAdd_m_activityJumpFuncId;
+ (void)PBArrayAdd_m_activityTips;
+ (void)PBArrayAdd_m_activityExpiredTime;
+ (void)initialize;
+ (id)GenFromDictionary:(id)a0;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
