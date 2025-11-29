@interface AWECommentTransitionManager : NSObject

+ (BOOL)isCommentVCTransition;
+ (BOOL)isCommentFullScreenAtTop;
+ (void)updateIsPartialFullScreenZoomOutTransition:(BOOL)a0;
+ (BOOL)isFullScreenCommentVCTransition;
+ (BOOL)isFullScreenZoomInTransition;
+ (BOOL)isPartialScreenZoomInTransition;
+ (void)tryToCancelInteractiveTransitionWithFromProtocol:(id)a0 willCancelHandler:(id /* block */)a1;
+ (BOOL)isCommentVCNonInteractiveZoomInOrOutTransition;
+ (BOOL)isCommentMeidaFeedTransition;

@end
