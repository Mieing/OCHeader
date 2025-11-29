@class IESSCVideoTransitionRenderInfo;
@protocol IESSCVideoTransition;

@interface IESSCVideoTimelineTransitionInfo : NSObject

@property (retain, nonatomic) id<IESSCVideoTransition> transition;
@property (retain, nonatomic) IESSCVideoTransitionRenderInfo *renderInfo;

- (void).cxx_destruct;

@end
