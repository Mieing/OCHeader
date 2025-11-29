@class IESLiveRevenueCleanScreenStrategySceneNode;

@interface IESLiveRevenueCleanScreenStrategyDeallocNode : NSObject

@property (copy, nonatomic) id /* block */ deallocBlock;
@property (retain, nonatomic) IESLiveRevenueCleanScreenStrategySceneNode *sceneNode;

+ (id)nodeWithSceneNode:(id)a0 deallocBlock:(id /* block */)a1;

- (void).cxx_destruct;
- (void)dealloc;

@end
