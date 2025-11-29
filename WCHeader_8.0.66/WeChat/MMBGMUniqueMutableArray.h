@class NSMutableArray, NSMutableSet;

@interface MMBGMUniqueMutableArray : NSObject

@property (retain, nonatomic) NSMutableArray *array;
@property (retain, nonatomic) NSMutableSet *set;

+ (id)uniqueIdOfMusicData:(id)a0;

- (unsigned long long)count;
- (id)safeObjectAtIndex:(unsigned long long)a0;
- (void)safeAddObject:(id)a0;
- (void)safeRemoveObjectAtIndex:(unsigned long long)a0;
- (void)safeInsertObject:(id)a0 atIndex:(unsigned long long)a1;
- (long long)indexOfObject:(id)a0;
- (void)safeAddObjectsFromArray:(id)a0;
- (void)safeAddObjectsFromRecommendMusicInfos:(id)a0;
- (void)removeAllObjects;
- (void).cxx_destruct;

@end
