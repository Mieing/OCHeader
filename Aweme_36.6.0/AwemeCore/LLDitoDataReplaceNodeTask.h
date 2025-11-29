@class NSString, NSMutableDictionary, LLDitoPageModel, NSMutableArray;

@interface LLDitoDataReplaceNodeTask : LLDitoDataTask

@property (retain, nonatomic) NSMutableDictionary *resultNodeMap;
@property (retain, nonatomic) LLDitoPageModel *pageModel;
@property (copy, nonatomic) NSString *willBeReplaceNodeTag;
@property (copy, nonatomic) NSString *replaceNodeTag;
@property (retain, nonatomic) NSMutableArray *groupNodeList;

- (void)nodeBeSearched:(id)a0;
- (void)nodeDidSearchSubNodes:(id)a0;
- (void)pageModel:(id)a0 willBeReplacedNodeTag:(id)a1 replaceNodeTag:(id)a2;
- (void)clearSubNode:(id)a0;
- (void).cxx_destruct;

@end
