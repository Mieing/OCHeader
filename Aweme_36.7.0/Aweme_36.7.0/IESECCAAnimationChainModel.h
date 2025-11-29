@class CAAnimation;

@interface IESECCAAnimationChainModel : NSObject

@property (retain, nonatomic) CAAnimation *animation;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;

@end
