@class NSString, NSDictionary, NSData, NSMutableArray;

@interface UrlInfo : NSObject <NSCopying>

@property (retain, nonatomic) NSString *m_nsRequestUrl;
@property (retain, nonatomic) NSData *m_dtResponseData;
@property (retain, nonatomic) NSString *m_nsRefer;
@property (nonatomic) BOOL m_bGetMethod;
@property (retain, nonatomic) NSData *m_dtBodyData;
@property (retain, nonatomic) NSDictionary *m_dicReq;
@property (retain, nonatomic) NSDictionary *m_dicResp;
@property (nonatomic) BOOL m_bCdn;
@property (nonatomic) unsigned int m_uiRecvTime;
@property (nonatomic) unsigned int m_uiRetCode;
@property (nonatomic) unsigned int m_uiDataSize;
@property (nonatomic) unsigned int m_uiDnsCostTime;
@property (nonatomic) unsigned int m_uiConnectCostTime;
@property (nonatomic) unsigned int m_uiSendCostTime;
@property (nonatomic) unsigned int m_uiWaitResponseCostTime;
@property (nonatomic) unsigned int m_uiReceiveCostTime;
@property (retain, nonatomic) NSString *m_nsClientIP;
@property (retain, nonatomic) NSString *m_nsServerIP;
@property (nonatomic) unsigned int m_uiDnsType;
@property (retain, nonatomic) NSString *m_host;
@property (retain, nonatomic) NSString *m_nsRequestUrlSuffix;
@property (retain, nonatomic) NSString *m_nsXErrno;
@property (retain, nonatomic) NSMutableArray *m_aryReceiveData;
@property (nonatomic) BOOL m_bContinueReceive;
@property (retain, nonatomic) NSString *m_filePath;
@property (retain, nonatomic) NSString *m_fileMd5;
@property (nonatomic) BOOL m_bSupportValidateMd5;
@property (nonatomic) BOOL m_useDCIP;
@property (nonatomic) BOOL m_fromSns;
@property (nonatomic) BOOL m_useXorEncrypt;
@property (nonatomic) unsigned long long m_xorEncryKey;
@property (retain, nonatomic) NSString *m_nsXEnc;
@property (retain, nonatomic) NSString *m_nsXEncToken;
@property (nonatomic) unsigned int m_uiXEncIdx;
@property (nonatomic) unsigned int m_uiReqestCSeq;
@property (nonatomic) unsigned int m_uiResponseCSeq;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)GenStatString;
- (id)GenStatStringWithDataType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
