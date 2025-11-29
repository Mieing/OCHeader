@class NSMutableArray;

@interface MMTimeAverageData : NSObject

@property (retain, nonatomic) NSMutableArray *allRecord;

- (id)init;
- (void)addRecord:(id)a0;
- (id)averageDict;
- (id)averageDictExceptFirst;
- (id)firstDict;
- (id)averageDictFromArray:(id)a0;
- (id)numberObject:(id)a0;
- (id)stringWithDict:(id)a0;
- (void)addRawDataToStr:(id)a0 dict:(id)a1 sortedArray:(id)a2;
- (void).cxx_destruct;

@end
