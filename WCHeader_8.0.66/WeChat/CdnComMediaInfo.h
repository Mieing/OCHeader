@class NSString;

@interface CdnComMediaInfo : NSObject

@property (retain, nonatomic) NSString *m_nsClientMsgID;
@property (retain, nonatomic) NSString *m_nsFilePath;
@property (retain, nonatomic) NSString *m_nsFileID;
@property (retain, nonatomic) NSString *m_nsAesKey;
@property (nonatomic) unsigned long long m_uiFileTotalLen;
@property (nonatomic) unsigned int m_uiScene;
@property (retain, nonatomic) NSString *m_nsExtInfo;
@property (retain, nonatomic) NSString *m_nsMediaType;
@property (nonatomic) BOOL m_bNeedMediaId;
@property (nonatomic) BOOL m_bNeedStorage;
@property (nonatomic) int m_bizId;
@property (nonatomic) int m_appType;

- (id)init;
- (void).cxx_destruct;

@end
