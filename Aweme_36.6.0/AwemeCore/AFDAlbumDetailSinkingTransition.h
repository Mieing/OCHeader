@interface AFDAlbumDetailSinkingTransition : NSObject <AWETransitionContextProvider> {
    void /* unknown type, empty encoding */ videoController;
}

- (void)startDefaultAnimationWithFromVC:(id)a0 toVC:(id)a1 fromContextProvider:(id)a2 toContextProvider:(id)a3 containerView:(id)a4 context:(id)a5 interactionType:(unsigned long long)a6 completionHandler:(id /* block */)a7;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)interactionType;
- (void)dealloc;
- (void)appWillResignActive;

@end
