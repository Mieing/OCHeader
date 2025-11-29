@protocol MMRefreshTableFooterDelegate;

@interface MMRefreshTableFooterView : MMUIControl

@property (readonly, nonatomic) unsigned long long m_state;
@property (nonatomic) double m_heightLimit;
@property (nonatomic) double m_refreshThresholdOffset;
@property (nonatomic) BOOL m_bTop;
@property (weak, nonatomic) id<MMRefreshTableFooterDelegate> m_delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onStateOfNormal;
- (void)onStateOfLoading;
- (void)onStateOfNoMoreData:(id)a0;
- (void)onStateOfNoData:(id)a0;
- (void)resetState;
- (void)setState:(unsigned long long)a0;
- (void)onClick;
- (void)manualTriggerLoading;
- (void)removeClickAction;
- (void)refreshScrollViewDidScroll:(id)a0;
- (void)refreshScrollViewDidScroll:(id)a0 forces:(BOOL)a1;
- (void)refreshScrollView:(id)a0 didScrollAtOffset:(double)a1;
- (void)refreshScrollViewDataSourceDidFinishedLoading:(id)a0;
- (void).cxx_destruct;

@end
