@interface AFDAlbumDetailInteractiveSinkingTransition : NSObject <AWETransitionContextProvider> {
    void /* unknown type, empty encoding */ fromCP;
    void /* unknown type, empty encoding */ toCP;
    void /* unknown type, empty encoding */ fromVC;
    void /* unknown type, empty encoding */ toVC;
    void /* unknown type, empty encoding */ containerView;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ maskView;
    void /* unknown type, empty encoding */ interactionViewSnapShot;
    void /* unknown type, empty encoding */ videoController;
    void /* unknown type, empty encoding */ snapshotTabBar;
    void /* unknown type, empty encoding */ realTabBar;
    void /* unknown type, empty encoding */ originOuterBgColor;
    void /* unknown type, empty encoding */ scaleTransform;
    void /* unknown type, empty encoding */ startTimestamp;
    void /* unknown type, empty encoding */ startScale;
}

- (void)startCustomAnimationWithFromVC:(id)a0 toVC:(id)a1 fromContextProvider:(id)a2 toContextProvider:(id)a3 containerView:(id)a4 context:(id)a5;
- (void)updateAnimationWithPosition:(struct CGPoint { double x0; double x1; })a0 startPosition:(struct CGPoint { double x0; double x1; })a1;
- (void)finishAnimationWithCompletionBlock:(id /* block */)a0;
- (void)cancelAnimationWithCompletionBlock:(id /* block */)a0;
- (unsigned long long)allowTriggerDirectionForContext:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)interactionType;
- (void)dealloc;

@end
