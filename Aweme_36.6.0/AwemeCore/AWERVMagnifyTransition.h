@class NSString;
@protocol IESVideoPlayerProtocol;

@interface AWERVMagnifyTransition : NSObject <AWETransitionContextProvider>

@property (retain, nonatomic) id<IESVideoPlayerProtocol> playController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startDefaultAnimationWithFromVC:(id)a0 toVC:(id)a1 fromContextProvider:(id)a2 toContextProvider:(id)a3 containerView:(id)a4 context:(id)a5 interactionType:(unsigned long long)a6 completionHandler:(id /* block */)a7;
- (id)generateFeedSnapshotImageView:(id)a0 targetVC:(id)a1;
- (id)generateFeedSnapshotForImage:(id)a0;
- (double)transitionDuration:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)interactionType;

@end
