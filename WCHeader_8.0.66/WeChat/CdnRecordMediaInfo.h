@class NSString, FavoritesItemDataField;

@interface CdnRecordMediaInfo : NSObject <NSCopying>

@property (retain, nonatomic) NSString *m_nsClientMsgID;
@property (retain, nonatomic) NSString *m_nsFilePath;
@property (retain, nonatomic) NSString *m_nsTargetFilePath;
@property (retain, nonatomic) NSString *m_nsVideoThumbPath;
@property (retain, nonatomic) NSString *m_nsUsername;
@property (retain, nonatomic) NSString *m_nsFileID;
@property (retain, nonatomic) NSString *m_nsAesKey;
@property (retain, nonatomic) NSString *m_nsFileMd5;
@property (nonatomic) unsigned long long m_uiFileTotalLen;
@property (nonatomic) unsigned int m_uiScene;
@property (retain, nonatomic) NSString *m_nsExtInfo;
@property (nonatomic) unsigned int m_uiFileType;
@property (nonatomic) BOOL isThumb;
@property (retain, nonatomic) NSString *m_authkey;
@property (nonatomic) double m_tGetMoovTime;
@property (nonatomic) unsigned int m_uiMoovPos;
@property (nonatomic) unsigned long long m_ui64StartTime;
@property (nonatomic) unsigned long long m_ui64EndTime;
@property (retain, nonatomic) FavoritesItemDataField *recordDataField;
@property (nonatomic) BOOL isLargeFile;
@property (retain, nonatomic) NSString *signature;
@property (retain, nonatomic) NSString *fakeAeskey;
@property (retain, nonatomic) NSString *fakeSignature;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
