@class NSString, NSData, MMResSignatureDataInfos;

@interface MMResDownloadUrlInfo : MMObject <PBCoding, WCTColumnCoding>

@property (retain, nonatomic) NSString *srcUrl;
@property (retain, nonatomic) NSString *version;
@property (nonatomic) BOOL isEncrypt;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *originalMd5;
@property (nonatomic) BOOL isCompress;
@property (nonatomic) BOOL isLoginUsrRelated;
@property (nonatomic) unsigned int fileId;
@property (nonatomic) unsigned int supportVersion;
@property (nonatomic) unsigned int downloadPriority;
@property (nonatomic) unsigned int retryCnt;
@property (nonatomic) BOOL isPage;
@property (nonatomic) BOOL isDownloaded;
@property (retain, nonatomic) NSData *signatureData;
@property (retain, nonatomic) MMResSignatureDataInfos *arrSignatureDataInfo;
@property (readonly, nonatomic) unsigned int protocal;
@property (retain, nonatomic) NSString *originalSha1;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_srcUrl;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_isEncrypt;
+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_isCompress;
+ (void)PBArrayAdd_isLoginUsrRelated;
+ (void)PBArrayAdd_fileId;
+ (void)PBArrayAdd_supportVersion;
+ (void)PBArrayAdd_isDownloaded;
+ (void)PBArrayAdd_signatureData;
+ (void)PBArrayAdd_arrSignatureDataInfo;
+ (void)PBArrayAdd_originalMd5;
+ (void)PBArrayAdd_downloadPriority;
+ (void)PBArrayAdd_retryCnt;
+ (void)PBArrayAdd_originalSha1;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;

- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (void).cxx_destruct;

@end
