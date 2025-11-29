@class NSString;

@interface CdnFavMediaInfo : NSObject

@property (retain, nonatomic) NSString *m_nsClientMsgID;
@property (retain, nonatomic) NSString *m_nsFilePath;
@property (nonatomic) BOOL m_bStreamMedia;
@property (retain, nonatomic) NSString *m_nsFileID;
@property (retain, nonatomic) NSString *m_nsAesKey;
@property (nonatomic) unsigned long long m_uiFileTotalLen;
@property (nonatomic) unsigned int m_uiFileType;

- (void).cxx_destruct;

@end
