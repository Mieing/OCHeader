@class UILabel, IESLiveGuideOpenPlatformPromptArrowView, UIView;

@interface IESLiveGuideOpenPlatformPromptView : UIView

@property (nonatomic) unsigned long long arrowPosition;
@property (nonatomic) unsigned long long arrowDirection;
@property (nonatomic) double arrowLeftOffset;
@property (retain, nonatomic) UILabel *contentLabel;
@property (weak, nonatomic) UIView *contentView;
@property (retain, nonatomic) IESLiveGuideOpenPlatformPromptArrowView *arrowView;
@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic) BOOL isV2Style;

- (void)showCustomView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 arrowDierction:(unsigned long long)a1 arrowPosition:(unsigned long long)a2 arrowLeftOffset:(double)a3;
- (void)v2UpdateConstraints;
- (void)pr_showContentLabel;
- (void)showPrompt:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)buildView;

@end
