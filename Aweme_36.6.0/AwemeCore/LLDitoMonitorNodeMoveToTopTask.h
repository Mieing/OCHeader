@class NSArray, LLDitoPageContext, NSSet;

@interface LLDitoMonitorNodeMoveToTopTask : NSObject

@property (copy, nonatomic) NSArray *nodeTagList;
@property (copy, nonatomic) NSArray *nodeList;
@property (copy, nonatomic) id /* block */ callBack;
@property (weak, nonatomic) LLDitoPageContext *pageContext;
@property (copy, nonatomic) NSSet *topNodeSet;

- (void)pageDidScroll:(id)a0;
- (id)stickManger;
- (BOOL)isSameTopNodeTagSet:(id)a0;
- (id)initWithNodeTagList:(id)a0 pageContext:(id)a1 callBack:(id /* block */)a2;
- (void).cxx_destruct;

@end
