@class NSString;

@interface EmoticonServerTip : MMObject <PBCoding>

@property (nonatomic) unsigned int m_newCount;
@property (nonatomic) unsigned int m_freeCount;
@property (retain, nonatomic) NSString *m_iconUrl;
@property (nonatomic) unsigned int m_lastUpdateTime;
@property (nonatomic) unsigned int m_personalNewCount;
@property (nonatomic) unsigned int m_addButtonNewCount;
@property (nonatomic) BOOL m_isNeedBadge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_m_newCount;
+ (void)PBArrayAdd_m_freeCount;
+ (void)PBArrayAdd_m_iconUrl;
+ (void)PBArrayAdd_m_lastUpdateTime;
+ (void)PBArrayAdd_m_isNeedBadge;
+ (void)PBArrayAdd_m_personalNewCount;
+ (void)PBArrayAdd_m_addButtonNewCount;
+ (void)initialize;
+ (id)getSaveRootDir;
+ (id)getSavePath;
+ (id)loadFromCache;

@end
