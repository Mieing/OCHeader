@class NSMutableArray, DitoPageModel, NSMutableDictionary;

@interface DitoDataSubTreeTask : DitoDataTask

@property (retain, nonatomic) DitoPageModel *pageModel;
@property (retain, nonatomic) NSMutableDictionary *subNodeMap;
@property (retain, nonatomic) NSMutableDictionary *subContainerNodeMap;
@property (retain, nonatomic) NSMutableDictionary *subViewModelMap;
@property (retain, nonatomic) NSMutableArray *subLynxNodeList;
@property (retain, nonatomic) NSMutableArray *subGroupNodeList;

- (id)subTreeWithTag:(id)a0 inPageModel:(id)a1;
- (void)didDepthSearch:(id)a0;
- (void)beSearched:(id)a0;
- (void).cxx_destruct;

@end
