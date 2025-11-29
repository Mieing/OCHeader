@class TAVVideoTransitionRenderInfo;
@protocol TAVVideoTransition;

@interface TAVVideoCompositionTransitionInfo : NSObject

@property (retain, nonatomic) id<TAVVideoTransition> transition;
@property (retain, nonatomic) TAVVideoTransitionRenderInfo *renderInfo;

- (void).cxx_destruct;

@end
