@class NSString, ResourceMeta, MMLiteAppOpenParam, MMLiteAppEncryptMetaData, NSMutableArray;

@interface MMLiteAppDownloadItem : NSObject

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *baseId;
@property (retain, nonatomic) NSString *pId;
@property (retain, nonatomic) NSString *filePath;
@property (retain, nonatomic) NSString *signatureKey;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSString *resourceName;
@property (nonatomic) unsigned int resourceVersion;
@property (retain, nonatomic) MMLiteAppOpenParam *openParam;
@property (retain, nonatomic) ResourceMeta *resMeta;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) unsigned long long retryCount;
@property (nonatomic) unsigned long long from;
@property (nonatomic) unsigned long long checkTime;
@property (nonatomic) unsigned long long downloadTime;
@property (nonatomic) BOOL isUseCronetDownload;
@property (retain, nonatomic) MMLiteAppEncryptMetaData *encryptMetaData;
@property (nonatomic) long long checkUpdateFrom;
@property (nonatomic) BOOL isDownloadMediaResource;
@property (nonatomic) unsigned long long pkgCompressAlgorithm;
@property (retain, nonatomic) NSMutableArray *fallbackMetaDataList;

- (id)init;
- (void).cxx_destruct;

@end
