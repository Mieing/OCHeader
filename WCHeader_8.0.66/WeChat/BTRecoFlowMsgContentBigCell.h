@class UILabel;

@interface BTRecoFlowMsgContentBigCell : BTRecoFlowMsgCell

@property (retain, nonatomic) UILabel *videoDurationLabel;

- (void)updateWithItemMsg:(id)a0 cellWidth:(double)a1;
- (struct CGSize { double x0; double x1; })bigPlayButtonSize;
- (void)layoutSubviews;
- (void)configurateMediaIcon:(id)a0;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
