@class UILabel, IESGCPTimer, IESGCPXPlayGameProgressView;

@interface IESGCPCGLoadProgressView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *progressLabel;
@property (retain, nonatomic) UILabel *hintLabel;
@property (nonatomic) long long hintIndex;
@property (retain, nonatomic) IESGCPXPlayGameProgressView *progressView;
@property (retain, nonatomic) IESGCPTimer *timer;
@property (readonly, nonatomic) double progress;

- (void)startHintCarousel:(id)a0 needBadNetHint:(BOOL)a1;
- (void)stopHintCarousel;
- (id)badNetHintLabel;
- (void)updateLabelColor;
- (void).cxx_destruct;
- (void)invalidateTimer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupSubviews;
- (void)updateProgress:(double)a0;
- (void)updateTitle:(id)a0;

@end
