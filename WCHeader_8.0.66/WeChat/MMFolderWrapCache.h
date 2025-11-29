@class NSString, NSMutableDictionary, NSMutableSet;

@interface MMFolderWrapCache : NSObject <PBCoding>

@property (retain, nonatomic) NSString *shortPath;
@property (nonatomic) long long lastScanTime;
@property (nonatomic) unsigned int fileNum;
@property (nonatomic) unsigned long long fileSize;
@property (retain, nonatomic) NSMutableDictionary *dicBizStat;
@property (retain, nonatomic) NSMutableDictionary *dicFileTypeInUseStat;
@property (retain, nonatomic) NSMutableDictionary *dicWechatFileClassStat;
@property (retain, nonatomic) NSMutableSet *fileNameSet;
@property (nonatomic) unsigned long long logicFileSize;
@property (nonatomic) unsigned int puffyFileNum;
@property (nonatomic) unsigned long long puffyFileSize;
@property (nonatomic) unsigned long long puffyLogicFileSize;
@property (nonatomic) long long cacheTime;
@property (nonatomic) BOOL isIgnoreCowFile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_lastScanTime;
+ (void)PBArrayAdd_fileNum;
+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_dicBizStat;
+ (void)PBArrayAdd_dicFileTypeInUseStat;
+ (void)PBArrayAdd_dicWechatFileClassStat;
+ (void)PBArrayAdd_cacheTime;
+ (void)PBArrayAdd_shortPath;
+ (void)PBArrayAdd_logicFileSize;
+ (void)PBArrayAdd_puffyFileNum;
+ (void)PBArrayAdd_puffyFileSize;
+ (void)PBArrayAdd_puffyLogicFileSize;
+ (void)PBArrayAdd_isIgnoreCowFile;
+ (void)PBArrayAdd_fileNameSet;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (void).cxx_destruct;

@end
