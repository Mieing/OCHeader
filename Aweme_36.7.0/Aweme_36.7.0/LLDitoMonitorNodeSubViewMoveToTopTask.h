@class NSArray, NSDictionary, NSString, LLDitoPageContext, NSSet;

@interface LLDitoMonitorNodeSubViewMoveToTopTask : NSObject

@property (copy, nonatomic) NSDictionary *subViewDic;
@property (copy, nonatomic) NSArray *nodeList;
@property (copy, nonatomic) id /* block */ callBack;
@property (weak, nonatomic) LLDitoPageContext *pageContext;
@property (copy, nonatomic) NSString *topNodeTag;
@property (copy, nonatomic) NSSet *topNodeSubViewSet;

- (void)pageDidScroll:(id)a0;
- (id)stickManger;
- (BOOL)isSameTopSubViewIdSet:(id)a0;
- (id)initWithNodeSubViewIdMap:(id)a0 pageContext:(id)a1 callBack:(id /* block */)a2;
- (void).cxx_destruct;

@end
