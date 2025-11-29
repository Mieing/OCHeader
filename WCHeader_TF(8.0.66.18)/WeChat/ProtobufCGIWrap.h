@class NSData, NSString, MMKCgi, ProtobufCGIProfile, WXPBGeneratedMessage, NSObject, UrlInfo, MMKNetworkMockManager;

@interface ProtobufCGIWrap : NSObject

@property (retain, nonatomic) WXPBGeneratedMessage *m_pbRequest;
@property (retain, nonatomic) NSData *requestData;
@property (nonatomic) Class m_pbRespClass;
@property (retain, nonatomic) WXPBGeneratedMessage *m_pbResponse;
@property (retain, nonatomic) NSData *responseData;
@property (retain, nonatomic) NSData *m_retServerId;
@property (nonatomic) unsigned int m_uiChannelType;
@property (nonatomic) unsigned int m_uiCgi;
@property (nonatomic) unsigned int m_uiScene;
@property (retain, nonatomic) NSString *m_nsCgiName;
@property (retain, nonatomic) NSString *m_nsUri;
@property (nonatomic) unsigned int m_uiCandidateUin;
@property (retain, nonatomic) NSData *m_dtResponseDecryptKey;
@property (nonatomic) unsigned int m_uiMessage;
@property (nonatomic) Class m_eventHandlerClass;
@property (nonatomic) BOOL canRetry;
@property (retain, nonatomic) NSObject *m_oUserData;
@property (retain, nonatomic) UrlInfo *m_oUrlInfo;
@property (nonatomic) BOOL m_bNotifyPartLen;
@property (nonatomic) unsigned int m_uiRetryCount;
@property (nonatomic) double m_douTimeout;
@property (nonatomic) double m_douReadTimeout;
@property (nonatomic) int m_netwrokStrategy;
@property (nonatomic) unsigned char m_routeInfo;
@property (nonatomic) double totalTimeOut;
@property (nonatomic) BOOL m_longpolling;
@property (nonatomic) int m_longPollingTimeout;
@property (nonatomic) BOOL m_bindCellular;
@property (retain, nonatomic) NSData *m_pbResponseData;
@property (nonatomic) BOOL m_bIsKeepAlive;
@property (nonatomic) BOOL m_needCGIProfile;
@property (nonatomic) BOOL isDataReportMonitor;
@property (nonatomic) unsigned long long m_newdnsBusinessType;
@property (retain, nonatomic) MMKCgi *kindaCgi;
@property (retain, nonatomic) MMKNetworkMockManager *kindaMockManager;
@property (retain, nonatomic) ProtobufCGIProfile *cgiProfile;
@property (retain, nonatomic) NSString *reqHost;
@property (nonatomic) short encryptAlgo;
@property (nonatomic) int stn_errType;
@property (nonatomic) int stn_errCode;

- (BOOL)isRespSuccess;
- (id)init;
- (void).cxx_destruct;

@end
