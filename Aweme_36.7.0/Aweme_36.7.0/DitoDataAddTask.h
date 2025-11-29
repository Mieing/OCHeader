@class NSMutableArray, DitoPageModel, NSMutableDictionary;

@interface DitoDataAddTask : DitoDataTask

@property (retain, nonatomic) DitoPageModel *pageModel;
@property (retain, nonatomic) NSMutableDictionary *r_nodeMap;
@property (retain, nonatomic) NSMutableDictionary *r_containerNodeMap;
@property (retain, nonatomic) NSMutableDictionary *r_viewModelMap;
@property (retain, nonatomic) NSMutableArray *r_lynxNodeList;
@property (retain, nonatomic) NSMutableArray *r_groupNodeList;

- (void)nodeBeSearched:(id)a0;
- (void)markNode:(id)a0;
- (void)setUpSourceData;
- (void)nodeDidSearchSubNodes:(id)a0;
- (id)addNode:(id)a0 index:(long long)a1 atPageModel:(id)a2;
- (void).cxx_destruct;

@end
