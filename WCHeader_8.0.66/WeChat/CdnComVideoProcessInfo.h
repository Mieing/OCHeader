@class NSString;

@interface CdnComVideoProcessInfo : NSObject

@property (retain, nonatomic) NSString *m_nsClientMsgID;
@property (retain, nonatomic) NSString *m_nsFilePath;
@property (nonatomic) int m_iNotMoovReason;
@property (nonatomic) unsigned long long m_uiOffset;
@property (nonatomic) unsigned long long m_uiLength;
@property (nonatomic) unsigned int m_uiDurationMs;
@property (retain, nonatomic) NSString *m_nsM3u8;
@property (retain, nonatomic) NSString *svrFlag;
@property (nonatomic) int videoFormat;
@property (nonatomic) int originalVideoFormat;

- (void).cxx_destruct;

@end
