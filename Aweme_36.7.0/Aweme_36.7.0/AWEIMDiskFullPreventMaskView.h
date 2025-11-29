@interface AWEIMDiskFullPreventMaskView : UIView

@property (copy, nonatomic) id /* block */ maskViewTapAction;
@property (copy, nonatomic) id /* block */ maskViewDidAutoClose;

- (void)handleWillEnterForegroundNotification:(id)a0;
- (void)refreshViewByFreeSpace;
- (void)adjustFrameIfNeeded;
- (void).cxx_destruct;
- (void)hide;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)show;
- (void)tapAction:(id)a0;
- (void)handleSwipe:(id)a0;

@end
