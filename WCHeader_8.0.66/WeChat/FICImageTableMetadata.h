@class MMFICImageFormat, NSString, NSMutableDictionary, MemoryMappedKV, NSMutableOrderedSet, NSMutableIndexSet;

@interface FICImageTableMetadata : NSObject <PBCoding> {
    NSString *m_metadataPath;
    MMFICImageFormat *m_imgFormat;
    MemoryMappedKV *m_entriesKV;
    NSMutableOrderedSet *m_MRUEntries;
    NSMutableIndexSet *m_unoccupiedIndexes;
}

@property (nonatomic) unsigned int maxLRUFactor;
@property (readonly, nonatomic) NSMutableDictionary *entries;
@property (retain, nonatomic) NSString *formatName;
@property (nonatomic) unsigned int imgSizeWidth;
@property (nonatomic) unsigned int imgSizeHeight;
@property (nonatomic) unsigned int imgMaxCnt;
@property (nonatomic) unsigned int entryCount;
@property (nonatomic) unsigned int cpuzSize;
@property (nonatomic) unsigned int pageSize;
@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned int FICVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_formatName;
+ (void)PBArrayAdd_imgSizeWidth;
+ (void)PBArrayAdd_imgSizeHeight;
+ (void)PBArrayAdd_imgMaxCnt;
+ (void)PBArrayAdd_cpuzSize;
+ (void)PBArrayAdd_pageSize;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_FICVersion;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithMetadataPath:(id)a0 imgFormat:(id)a1;
- (BOOL)loadMetadata;
- (BOOL)saveMetadata;
- (void)reset;
- (unsigned long long)indexOfEntryForEntityUUID:(id)a0;
- (void)deleteEntryForEntityUUID:(id)a0;
- (void)newEntryWithEntityUUID:(id)a0 entryIndex:(unsigned long long)a1;
- (unsigned long long)nextEntryIndex;
- (void)entryWasAccessedWithEntityUUID:(id)a0;
- (void)setEntityInUse:(BOOL)a0 entityUUID:(id)a1;
- (BOOL)isAnyEntityInUsed;
- (void).cxx_destruct;

@end
