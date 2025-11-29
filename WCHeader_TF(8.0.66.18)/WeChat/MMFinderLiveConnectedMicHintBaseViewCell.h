@class UILabel, NSString, UIView;

@interface MMFinderLiveConnectedMicHintBaseViewCell : UIView

@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) UIView *separatorBar;
@property (nonatomic) double targetBottom;
@property (retain, nonatomic) NSString *hint;

+ (id)reuseId;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)resetState;
- (void)setTextLabelBottom:(double)a0;
- (void).cxx_destruct;

@end
