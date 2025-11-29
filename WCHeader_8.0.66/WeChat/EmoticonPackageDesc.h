@class NSString, NSMutableArray, EmotionLinkInfo;

@interface EmoticonPackageDesc : MMObject <PBCoding>

@property (retain, nonatomic) NSMutableArray *m_descList;
@property (retain, nonatomic) NSString *m_packageId;
@property (nonatomic) unsigned int m_lastRequestTime;
@property (nonatomic) unsigned int m_clickFlag;
@property (retain, nonatomic) EmotionLinkInfo *linkInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_m_descList;
+ (void)PBArrayAdd_m_packageId;
+ (void)PBArrayAdd_m_clickFlag;
+ (void)PBArrayAdd_m_lastRequestTime;
+ (void)PBArrayAdd_linkInfo;
+ (void)initialize;
+ (id)getMd5Pid:(id)a0;
+ (id)getSaveRootDir;
+ (id)getSavePath:(id)a0;
+ (id)loadFromCache:(id)a0;
+ (BOOL)canDownLoadForDownloadFlag:(unsigned int)a0;

- (id)getPBPropertyTable;
- (id)init;
- (BOOL)hasDesc;
- (void)saveToCache;
- (void).cxx_destruct;

@end
