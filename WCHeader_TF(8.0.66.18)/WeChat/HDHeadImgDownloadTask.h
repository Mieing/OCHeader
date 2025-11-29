@class NSString;

@interface HDHeadImgDownloadTask : NSObject

@property (retain, nonatomic) NSString *m_nsName;
@property (retain, nonatomic) NSString *m_nsTempFile;
@property (retain, nonatomic) NSString *m_nsUrl;
@property (nonatomic) unsigned int m_headType;
@property (nonatomic) unsigned int m_eventId;
@property (nonatomic) unsigned int m_totalLen;
@property (nonatomic) unsigned int m_startOffset;
@property (nonatomic) unsigned int m_uiDownloadEventId;
@property (nonatomic) unsigned char m_headCategory;
@property (nonatomic) int m_downloadType;

- (void).cxx_destruct;

@end
