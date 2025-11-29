@interface FlowCommon.FlowRefreshHeader : MJRefreshHeader <UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ loadingView;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ feedbackGenerator;
    void /* unknown type, empty encoding */ couldTriggerFeedback;
}

@property (nonatomic) long long state;

- (void)placeSubviews;
- (void)scrollViewContentOffsetDidChange:(id)a0;
- (void).cxx_destruct;
- (void)prepare;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
