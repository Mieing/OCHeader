@class UILabel, UIView;

@interface AWERLSegmentRedDotView : UIView

@property (retain, nonatomic) UIView *redDotBgView;
@property (retain, nonatomic) UILabel *contentLabel;

- (void)configWithRedDotStyle:(unsigned long long)a0 contentString:(id)a1;
- (void)refreshRegularStyleRedDot;
- (void)refreshTextStyleRedDot:(id)a0;
- (void).cxx_destruct;

@end
