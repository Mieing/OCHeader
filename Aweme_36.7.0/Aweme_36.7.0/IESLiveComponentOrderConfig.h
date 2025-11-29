@class NSString, NSMutableDictionary, NSMutableArray;

@interface IESLiveComponentOrderConfig : NSObject

@property (retain, nonatomic) NSString *rewriteLocalClass;
@property (retain, nonatomic) NSMutableDictionary *rewriteGroupOrder;
@property (retain, nonatomic) NSMutableArray *compSinglePriority;

- (void)filterSingleOrder:(id)a0 intoArray:(id)a1;
- (void)filterAddSinglePriorityArray:(id)a0;
- (void).cxx_destruct;

@end
