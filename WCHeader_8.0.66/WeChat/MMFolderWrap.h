@class NSString, NSMutableDictionary, NSMutableArray, MMBizFileMatchNode;

@interface MMFolderWrap : NSObject

@property (retain, nonatomic) NSString *m_name;
@property (retain, nonatomic) NSMutableArray *m_arrChildFolder;
@property (retain, nonatomic) NSMutableArray *m_arrNotScanFileName;
@property (nonatomic) long long m_onlyBizType;
@property (nonatomic) int m_onlyFileTypeInUse;
@property (nonatomic) int m_onlyWeChatFileClass;
@property (nonatomic) long long m_storeTimeType;
@property (retain, nonatomic) MMBizFileMatchNode *m_bizMatchNode;
@property (nonatomic) unsigned int m_curStartTime;
@property (nonatomic) unsigned int m_subFolderNum;
@property (nonatomic) unsigned int m_fileNum;
@property (nonatomic) unsigned long long m_fileSize;
@property (nonatomic) unsigned int m_delFileNum;
@property (nonatomic) unsigned long long m_delFileSize;
@property (retain, nonatomic) NSMutableDictionary *m_dicBizStat;
@property (retain, nonatomic) NSMutableDictionary *m_dicFileTypeInUseStat;
@property (retain, nonatomic) NSMutableDictionary *m_dicWechatFileClassStat;
@property (nonatomic) unsigned long long m_logicFileSize;
@property (nonatomic) unsigned int m_puffyFileNum;
@property (nonatomic) unsigned long long m_puffyFileSize;
@property (nonatomic) unsigned long long m_puffyLogicFileSize;
@property (nonatomic) unsigned long long hardlinkIgnoreSize;
@property (nonatomic) unsigned long long hardlinkIgnoreCnt;
@property (nonatomic) unsigned long long hardlinkTotalCnt;
@property (nonatomic) unsigned long long cowIgnoreSize;
@property (nonatomic) unsigned long long cowIgnoreCnt;
@property (nonatomic) unsigned long long cowTotalCnt;
@property (nonatomic) unsigned int m_curDelFileNum;
@property (nonatomic) unsigned long long m_curDelFileSize;
@property (nonatomic) unsigned int m_curScannedFileNum;
@property (nonatomic) unsigned int m_hitCacheCount;
@property (nonatomic) unsigned int m_setCacheCount;
@property (nonatomic) unsigned int m_refreshCacheTimeCount;
@property (nonatomic) unsigned int m_timeOutCacheCount;
@property (nonatomic) unsigned int m_fileModifyCacheCount;
@property (nonatomic) unsigned int m_changeCacheCount;
@property (nonatomic) BOOL bStatOK;

- (void)dealloc;
- (id)init;
- (BOOL)isMarkFolderWrap;
- (void)getChildFolderAndFileWithParentPath:(id)a0;
- (BOOL)isFolderMayHaveDB;
- (BOOL)isEmptyFolder;
- (void).cxx_destruct;

@end
