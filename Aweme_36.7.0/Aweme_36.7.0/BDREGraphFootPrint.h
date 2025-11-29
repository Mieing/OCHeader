@class NSMutableDictionary, NSDictionary, BDREGraphNode, NSMutableArray;

@interface BDREGraphFootPrint : NSObject

@property (retain, nonatomic) NSDictionary *params;
@property (nonatomic) long long maxIndex;
@property (nonatomic) BOOL needBreak;
@property (retain, nonatomic) NSMutableArray *hitOutputNodes;
@property (retain, nonatomic) NSMutableDictionary *footPrintMap;
@property (retain, nonatomic) NSMutableDictionary *usedParameters;
@property (nonatomic) BOOL isFirstTravelFinished;
@property (retain, nonatomic) BDREGraphNode *trieLastNode;

- (void)updateIndex:(long long)a0;
- (id)usedParams;
- (id)initWithParams:(id)a0 needBreak:(BOOL)a1;
- (id)hitOutputResults;
- (id)paramValueForName:(id)a0 isRegistered:(BOOL)a1;
- (void)addHitOutputNode:(id)a0;
- (id)nodeFootPrintWithGraphNodeID:(id)a0;
- (void).cxx_destruct;

@end
