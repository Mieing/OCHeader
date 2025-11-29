@class NSArray, NSMutableDictionary, UIImageView;

@interface MinimizeStateContainerView : UIView

@property (retain, nonatomic) NSMutableDictionary *dicPassiveState2CacheView;
@property (retain, nonatomic) NSArray *stateViewList;
@property (retain, nonatomic) UIImageView *moreView;
@property (nonatomic) BOOL useLargeStyle;
@property (nonatomic) struct CGSize { double width; double height; } calculatedSize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)highLightedViewForTaskData:(id)a0;
- (void)updateWithStateList:(id)a0;
- (void)animateUpdateWithStateList:(id)a0 duration:(BOOL)a1 completion:(id /* block */)a2;
- (id)genStateViewList:(id)a0;
- (id)getPassiveStateView:(unsigned int)a0 withStateTask:(id)a1;
- (id)passiveStateCacheKey:(unsigned int)a0 withTask:(id)a1;
- (void).cxx_destruct;

@end
