@class NSString;

@interface WCMallActivityInfo : NSObject

@property (nonatomic) unsigned int m_uiActivityExpiredTime;
@property (retain, nonatomic) NSString *m_nsActivityIconLink;
@property (retain, nonatomic) NSString *m_nsActivityId;
@property (retain, nonatomic) NSString *m_nsActivityLink;
@property (retain, nonatomic) NSString *m_nsActivityTips;
@property (retain, nonatomic) NSString *m_nsActivityMessageContent;
@property (nonatomic) unsigned int m_uiActivityJumpFunctionId;
@property (nonatomic) unsigned int m_uiActivityType;
@property (retain, nonatomic) NSString *m_nsActivityUrl;
@property (nonatomic) unsigned int m_uiIsMsgReserved;

- (void).cxx_destruct;

@end
