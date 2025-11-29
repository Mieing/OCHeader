@class NSString;

@interface WebviewLocalResItem : MMObject <PBCoding>

@property (retain, nonatomic) NSString *localResId;
@property (retain, nonatomic) NSString *savePath;
@property (retain, nonatomic) NSString *svrId;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *cdnUrl;
@property (retain, nonatomic) NSString *cdnAESKey;
@property (nonatomic) unsigned int fileSize;
@property (retain, nonatomic) NSString *mediaType;
@property (retain, nonatomic) NSString *fileExt;
@property (retain, nonatomic) NSString *fileUrl;
@property (nonatomic) BOOL needMediaId;
@property (nonatomic) BOOL bNeedStorage;
@property (nonatomic) int appType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_localResId;
+ (void)PBArrayAdd_savePath;
+ (void)PBArrayAdd_svrId;
+ (void)PBArrayAdd_appId;
+ (void)PBArrayAdd_cdnUrl;
+ (void)PBArrayAdd_cdnAESKey;
+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_mediaType;
+ (void)PBArrayAdd_fileExt;
+ (void)PBArrayAdd_fileUrl;
+ (void)PBArrayAdd_needMediaId;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (void).cxx_destruct;

@end
