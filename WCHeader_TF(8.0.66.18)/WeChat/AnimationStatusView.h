@class NSString, MMUILabel;

@interface AnimationStatusView : UIView {
    MMUILabel *_statusView;
    NSString *_nsWording;
    NSString *_nsAppending;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)playAppending;
- (void)updateColor:(id)a0;
- (void)updateWithWord:(id)a0 Append:(id)a1 Font:(double)a2;
- (void)updateWithWord:(id)a0 Font:(double)a1;
- (void)startAnimation;
- (void)stopAnimation;
- (id)getText;
- (void).cxx_destruct;

@end
