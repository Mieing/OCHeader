@class MMTimer, MMUILabel, CAGradientLayer;

@interface MMMusicHorizontalScrollingView : UIView {
    MMUILabel *m_label1;
    MMUILabel *m_label2;
    MMTimer *m_timer;
    CAGradientLayer *m_maskLayer;
    double m_distance;
    double m_maxWidth;
    double m_distancePerSecond;
    double m_maskWidth;
    BOOL isLabelCenter;
    BOOL isLyricsPanelType;
}

- (id)init;
- (void)dealloc;
- (void)initMaskLayer;
- (void)setLabelCenter:(BOOL)a0;
- (void)setText:(id)a0 textColor:(id)a1 textFont:(id)a2 maxWidth:(double)a3;
- (void)setMaxWidth:(double)a0;
- (void)setLyricsPanelType:(BOOL)a0;
- (void)removeAnimation;
- (void)restartScroll;
- (void)resetScrollStatus;
- (void)resetAndInitTimer;
- (BOOL)isLabelAnimating;
- (double)label2AnimationMoveDistance;
- (double)loopAnimationDuration;
- (void)onTimer;
- (void).cxx_destruct;

@end
