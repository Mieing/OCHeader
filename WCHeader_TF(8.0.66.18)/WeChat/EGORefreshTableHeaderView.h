@protocol EGORefreshTableHeaderDelegate;

@interface EGORefreshTableHeaderView : MMUIView {
    int m_pulldownHeight;
    BOOL m_hasShake;
}

@property (nonatomic) int state;
@property (weak, nonatomic) id<EGORefreshTableHeaderDelegate> delegate;
@property (nonatomic) BOOL useForTransparentNavBar;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onStateOfPulling;
- (void)onStateOfNormal;
- (void)onStateOfLoading;
- (void)egoRefreshScrollViewDidScroll:(id)a0;
- (void)egoRefreshScrollViewDidEndDragging:(id)a0;
- (void)egoRefreshScrollViewDataSourceDidFinishedLoading:(id)a0;
- (void).cxx_destruct;

@end
