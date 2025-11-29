@class NSMutableArray;

@interface LLDitoDataReloadTask : LLDitoDataTask

@property (retain, nonatomic) NSMutableArray *groupNodeList;

- (void)nodeBeSearched:(id)a0;
- (void)nodeDidRelatedSubNodes:(id)a0;
- (BOOL)needSearchSubNodes:(id)a0;
- (void)reloadPageModel:(id)a0;
- (void).cxx_destruct;

@end
