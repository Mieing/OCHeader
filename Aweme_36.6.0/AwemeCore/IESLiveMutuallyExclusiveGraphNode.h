@class IESLiveMutuallyExclusiveViewItemID, NSMutableSet;

@interface IESLiveMutuallyExclusiveGraphNode : NSObject

@property (retain, nonatomic) IESLiveMutuallyExclusiveViewItemID *nodeID;
@property (retain, nonatomic) NSMutableSet *childNodes;

- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
