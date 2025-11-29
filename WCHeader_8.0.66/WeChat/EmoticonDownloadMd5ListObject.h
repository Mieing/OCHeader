@class NSData, NSMutableArray, NSString;

@interface EmoticonDownloadMd5ListObject : MMObject <PBCoding>

@property (retain, nonatomic) NSMutableArray *m_md5List;
@property (nonatomic) unsigned int m_lastUpdateTime;
@property (nonatomic) unsigned long long m_type;
@property (nonatomic) BOOL needRecordVersionKeyUpdate;
@property (retain, nonatomic) NSData *reqBuff;
@property (retain, nonatomic) NSString *versionKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_m_md5List;
+ (void)PBArrayAdd_m_lastUpdateTime;
+ (void)PBArrayAdd_reqBuff;
+ (void)PBArrayAdd_versionKey;
+ (void)initialize;
+ (id)GetEmoticonDownloadMd5ListObjectWithType:(unsigned long long)a0;
+ (BOOL)IsEmoticonDownloadMd5ListExistWithType:(unsigned long long)a0;
+ (void)RemoveEmoticonDownloadMd5ListWithType:(unsigned long long)a0;
+ (BOOL)NeedRecoverForType:(unsigned long long)a0;
+ (id)getEmoticonBackupRootDir;
+ (id)getEmoticonDownloadMd5ListPathWithType:(unsigned long long)a0;
+ (unsigned int)extFlagForCustomEmoticonType:(unsigned long long)a0;

- (id)getPBPropertyTable;
- (id)init;
- (void)saveToFile;
- (BOOL)moreThanADaySinceLastUpdateTime;
- (void)updateLastUpdateTime;
- (void)addMd5ObjectList:(id)a0;
- (void)addMd5ObjectList:(id)a0 atFirst:(BOOL)a1;
- (void)removeMd5:(id)a0;
- (void)stickyMd5List:(id)a0;
- (void)moveMd5List:(id)a0 toMd5Position:(id)a1;
- (void)clearMd5List;
- (id)completeMd5:(id)a0;
- (void)failedMd5:(id)a0;
- (void)checkComplete;
- (unsigned long long)checkCompleteAndReturnNeedMd5DownloadCount;
- (unsigned long long)totalCount;
- (unsigned long long)completeCount;
- (id)allValidEmojiInfoObjDic;
- (id)allEmojiInfoObjListWithValidOnly:(BOOL)a0;
- (id)getMd5List;
- (id)getNextUncompleteMd5Object;
- (id)sortedAndUnionWithEmoticonWraps:(id)a0;
- (unsigned long long)indexOfMd5ObjectWithMd5:(id)a0;
- (BOOL)checkCompleteForMd5Object:(id)a0;
- (id)logPrefix;
- (void).cxx_destruct;

@end
