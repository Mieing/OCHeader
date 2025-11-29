@class NSArray, NSMutableArray;

@interface BDREGraphNode : NSObject

@property (retain, nonatomic) NSMutableArray *innerPointNodes;
@property (nonatomic) long long maxIndex;
@property (readonly, nonatomic) NSArray *pointNodes;
@property (readonly, nonatomic) BOOL isEndNode;

- (void)updateIndex:(long long)a0;
- (id)valueWithFootPrint:(id)a0;
- (void)addPointNode:(id)a0;
- (BOOL)canPassWithFootPrint:(id)a0;
- (void)visitWithFootPrint:(id)a0 previousNode:(id)a1;
- (void)travelWithFootPrint:(id)a0;
- (BOOL)isVisitedWithFootPrint:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)identifier;

@end
