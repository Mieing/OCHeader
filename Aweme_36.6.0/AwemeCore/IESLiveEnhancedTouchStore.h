@class IESLiveShortTouchItem, NSMutableArray, IESLiveEnhancedTouchView;

@interface IESLiveEnhancedTouchStore : NSObject

@property (retain, nonatomic) IESLiveShortTouchItem *item;
@property (retain, nonatomic) IESLiveEnhancedTouchView *view;
@property (retain, nonatomic) NSMutableArray *enhancedTouchList;
@property (nonatomic) BOOL shouldHide;

- (void)componentOrientationTransitionBegin:(long long)a0;
- (void)componentOrientationTransitioning:(long long)a0;
- (void)updateEnhancedTouchShow;
- (void)removeCurrentEnhancedTouch;
- (void)onEnhancedTouchUIStateChange:(BOOL)a0;
- (void)insertEnhancedTouchItem:(id)a0 completion:(id /* block */)a1;
- (void)removeEnhancedTouchItem:(id)a0;
- (void)hideEnhancedTouch;
- (void)showEnhancedTouch;
- (void).cxx_destruct;
- (id)init;
- (id)itemForType:(unsigned long long)a0;
- (unsigned long long)containsType:(unsigned long long)a0;

@end
