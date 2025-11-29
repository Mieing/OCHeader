@class IESECMarketingDeallocInfo;

@interface IESECMarketingDeallocNode : NSObject

@property (copy, nonatomic) id /* block */ deallocBlock;
@property (retain, nonatomic) IESECMarketingDeallocInfo *sceneNode;

+ (id)nodeWithSceneNode:(id)a0 deallocBlock:(id /* block */)a1;

- (void).cxx_destruct;
- (void)dealloc;

@end
