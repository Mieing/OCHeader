@interface WCCC : NSObject

+ (id)usedsDataFromPtr:(const BOOL *)a0 count:(unsigned long long)a1;
+ (id)usedsData;
+ (id)usedsData:(id)a0 byIncludingUsedsData:(id)a1;
+ (id)usedsData:(id)a0 byIncludingUsedIndexes:(id)a1;
+ (id)usedsData:(id)a0 byExcludingUsedsData:(id)a1;
+ (BOOL)isValidWithIndex:(unsigned long long)a0 inUsedsData:(id)a1;
+ (BOOL)isCoveredWithIndex:(unsigned long long)a0 inUsedsData:(id)a1;
+ (id)collectionBlocksFromUsedsData:(id)a0;
+ (id)collectionBlocks;
+ (id)usedIndexesWithCollectionOfPath:(id)a0;

@end
