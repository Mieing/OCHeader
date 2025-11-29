@class UIImageView, UILabel, UIView;

@interface IESECWinGuidePopoverView : UIView

@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *guideLabel;
@property (nonatomic) unsigned long long popoverDirection;
@property (nonatomic) double arrowOffset;

- (id)initWithPopoverDirection:(unsigned long long)a0;
- (void)updateGuideLabelTextWithString:(id)a0;
- (void).cxx_destruct;
- (void)setUpConstraints;

@end
