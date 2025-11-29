@class NSMutableArray, LLDitoPageModel, NSMutableDictionary;

@interface LLDitoDataClearTask : LLDitoDataTask

@property (retain, nonatomic) LLDitoPageModel *pageModel;
@property (retain, nonatomic) NSMutableDictionary *r_nodeMap;
@property (retain, nonatomic) NSMutableDictionary *r_containerNodeMap;
@property (retain, nonatomic) NSMutableDictionary *r_viewModelMap;
@property (retain, nonatomic) NSMutableArray *r_lynxNodeList;
@property (retain, nonatomic) NSMutableArray *r_groupNodeList;

- (void)nodeBeSearched:(id)a0;
- (void)markNode:(id)a0;
- (void)setUpSourceData;
- (void)nodeDidSearchSubNodes:(id)a0;
- (void)clearNode:(id)a0;
- (id)clearNodeWithTag:(id)a0 atPageModel:(id)a1;
- (void).cxx_destruct;

@end
