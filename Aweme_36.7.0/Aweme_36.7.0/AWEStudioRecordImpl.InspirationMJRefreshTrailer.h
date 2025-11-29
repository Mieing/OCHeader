@interface AWEStudioRecordImpl.InspirationMJRefreshTrailer : MJRefreshComponent {
    void /* unknown type, empty encoding */ ignoredScrollViewContentInsetRight;
    void /* unknown type, empty encoding */ lastRefreshCount;
    void /* unknown type, empty encoding */ lastRightDelta;
}

- (void)placeSubviews;
- (void)scrollViewContentOffsetDidChange:(id)a0;
- (void)scrollViewContentSizeDidChange:(id)a0;
- (void)prepare;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)willMoveToSuperview:(id)a0;

@end
