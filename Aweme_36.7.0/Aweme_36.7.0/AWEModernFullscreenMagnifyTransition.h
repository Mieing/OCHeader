@class NSString;
@protocol IESVideoPlayerProtocol;

@interface AWEModernFullscreenMagnifyTransition : NSObject <AWETransitionContextProvider>

@property (retain, nonatomic) id<IESVideoPlayerProtocol> playController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPlayInteractionAdapterClass;

- (void)startDefaultAnimationWithFromVC:(id)a0 toVC:(id)a1 fromContextProvider:(id)a2 toContextProvider:(id)a3 containerView:(id)a4 context:(id)a5 interactionType:(unsigned long long)a6 completionHandler:(id /* block */)a7;
- (id)aAWEPlayInteractionAdapter;
- (id)generateFeedSnapshotImageView:(id)a0 targetVC:(id)a1 fromCP:(id)a2;
- (id)generateFeedSnapshotForImage:(id)a0 isRichAweme:(BOOL)a1;
- (double)transitionDuration:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)interactionType;
- (void)dealloc;

@end
