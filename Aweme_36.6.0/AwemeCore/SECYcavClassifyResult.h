@class NSMutableDictionary;

@interface SECYcavClassifyResult : NSObject

@property (retain, nonatomic) NSMutableDictionary *resultsDict;

- (id)allDataResults;
- (void)mergeClassifyResult:(id)a0;
- (void)addDataResult:(id)a0;
- (id)updateResult:(id)a0 withRelatedData:(id)a1;
- (id)dataResultsMap;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)init;

@end
