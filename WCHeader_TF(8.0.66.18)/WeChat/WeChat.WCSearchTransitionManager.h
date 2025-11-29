@interface WeChat.WCSearchTransitionManager : NSObject {
    void /* unknown type, empty encoding */ didSetTransition;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ viewSource;
@property (nonatomic, weak) void /* unknown type, empty encoding */ fromVC;
@property (nonatomic) void /* unknown type, empty encoding */ useNoSnapshot;
@property (nonatomic) void /* unknown type, empty encoding */ navigationBarColorSameAsVC;

- (void)setUpAnimationWithSearchBarOffset:(double)a0 fromVC:(id)a1;
- (void)setAppearTrasitionFromVC:(id)a0 fromSearchBar:(id)a1;
- (void)setNewAppearTrasitionFromVC:(id)a0 fromSearchBar:(id)a1;
- (void)onStartInteractivePopTransition;
- (void)onStartNavPopTransitionFrom:(id)a0;
- (void)onEndInteractivePopTransitionWithIsFinished:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;

@end
