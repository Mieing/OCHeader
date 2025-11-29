@class NSString, NSMutableArray;

@interface EmoticonTabRecommendData : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableArray *m_itemList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_m_itemList;
+ (void)initialize;
+ (id)Instance;
+ (id)getSaveRootDir;
+ (id)getSavePath;

- (id)getPBPropertyTable;
- (id)init;
- (id)itemList;
- (void)addItem:(id)a0;
- (void)removeItemWithProductId:(id)a0;
- (void)saveToFile;
- (void).cxx_destruct;

@end
