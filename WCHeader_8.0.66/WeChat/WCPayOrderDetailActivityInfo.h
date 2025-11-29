@class NSString, ExposureInfo;

@interface WCPayOrderDetailActivityInfo : NSObject

@property (retain, nonatomic) NSString *m_nsIconUrl;
@property (retain, nonatomic) NSString *m_nsActivityTitle;
@property (retain, nonatomic) NSString *m_nsBtnTitle;
@property (retain, nonatomic) NSString *m_nsActivityUrl;
@property (retain, nonatomic) NSString *m_nsActivitySlogan;
@property (nonatomic) unsigned int m_uiStyle;
@property (nonatomic) unsigned long long m_uiActivityId;
@property (nonatomic) unsigned long long m_uiActivityType;
@property (retain, nonatomic) NSString *m_nsSmallTitle;
@property (nonatomic) unsigned long long m_uiAwardId;
@property (nonatomic) unsigned int m_uiSendRecordId;
@property (nonatomic) unsigned int m_uiUserRecordId;
@property (retain, nonatomic) NSString *m_activityTinyAppUsername;
@property (retain, nonatomic) NSString *m_activityTinyAppPath;
@property (nonatomic) unsigned long long m_activityMchId;
@property (nonatomic) unsigned int m_activityTinyAppVersion;
@property (retain, nonatomic) NSString *m_getAwardParams;
@property (retain, nonatomic) NSString *m_queryAwardStatusParams;
@property (retain, nonatomic) ExposureInfo *m_exposureInfo;

- (void).cxx_destruct;

@end
