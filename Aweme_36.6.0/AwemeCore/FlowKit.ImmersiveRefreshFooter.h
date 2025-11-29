@interface FlowKit.ImmersiveRefreshFooter : MJRefreshAutoFooter {
    void /* unknown type, empty encoding */ couldTriggerFeedback;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_feedbackGenerator;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ originalInset;
}

@property (nonatomic) BOOL hidden;

- (void)placeSubviews;
- (void)scrollViewContentOffsetDidChange:(id)a0;
- (void)scrollViewPanStateDidChange:(id)a0;
- (void).cxx_destruct;
- (BOOL)isHidden;
- (void)prepare;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
