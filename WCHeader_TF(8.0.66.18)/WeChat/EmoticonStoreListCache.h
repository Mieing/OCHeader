@class NSString, NSMutableArray;

@interface EmoticonStoreListCache : MMObject <PBCoding>

@property (retain, nonatomic) NSMutableArray *itemList;
@property (retain, nonatomic) NSMutableArray *m_adArray;
@property (nonatomic) unsigned int m_topHotNum;
@property (nonatomic) unsigned int m_recentHotNum;
@property (retain, nonatomic) NSMutableArray *m_cellSetList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_itemList;
+ (void)PBArrayAdd_m_topHotNum;
+ (void)PBArrayAdd_m_recentHotNum;
+ (void)PBArrayAdd_m_adArray;
+ (void)PBArrayAdd_m_cellSetList;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
