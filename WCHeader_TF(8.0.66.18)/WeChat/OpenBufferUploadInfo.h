@class NSString, NSData;

@interface OpenBufferUploadInfo : NSObject

@property (retain, nonatomic) NSString *m_clientAppDataId;
@property (retain, nonatomic) NSString *m_nsUsrName;
@property (nonatomic) unsigned int m_addQueueTime;
@property (nonatomic) unsigned int m_uiScene;
@property (retain, nonatomic) NSData *m_uploadData;
@property (nonatomic) BOOL m_bUpload;
@property (nonatomic) unsigned int m_uiStartPos;
@property (retain, nonatomic) NSString *m_mediaId;
@property (nonatomic) unsigned int m_uploadDataSize;
@property (nonatomic) unsigned int m_uploadTime;
@property (nonatomic) unsigned int m_maxUploadTime;

- (BOOL)IsCanUpload;
- (void).cxx_destruct;

@end
