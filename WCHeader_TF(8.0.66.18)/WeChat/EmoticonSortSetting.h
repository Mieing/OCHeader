@class NSString, NSMutableArray;

@interface EmoticonSortSetting : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableArray *m_sortPids;
@property (retain, nonatomic) NSMutableArray *m_newSortPids;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_m_sortPids;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (void)resetSetting;
- (BOOL)loadSetting;
- (void)copyFeildFrom:(id)a0;
- (void)saveSetting;
- (id)getLocalCacheRootDir;
- (id)getLocalCachePath;
- (id)getSortPackageList:(id)a0 withTusiji:(BOOL)a1;
- (id)getSortPackageListWithDownloadedTusiji:(id)a0;
- (id)getOldSortPackageListWithDownloadedTusiji:(id)a0;
- (void).cxx_destruct;

@end
