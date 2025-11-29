@class UILabel, NSAttributedString;

@interface HTSLiveScorllLabelView : UIView

@property (retain, nonatomic) UILabel *frontLabel;
@property (retain, nonatomic) UILabel *backLabel;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) BOOL waitingForLayout;
@property (nonatomic) double speed;
@property (nonatomic) BOOL enableAnimation;
@property (nonatomic) long long scorllLabelAlignMode;
@property (nonatomic) BOOL shouldRepeat;
@property (retain, nonatomic) NSAttributedString *attributedContent;
@property (nonatomic) BOOL triggerRoundBlockInsteadRepeat;
@property (nonatomic) BOOL showAlphaBorderMask;
@property (copy, nonatomic) id /* block */ animationFinishOneRoundBlock;
@property (copy, nonatomic) id /* block */ animationFinishBlock;
@property (nonatomic) BOOL fixRepeatStartAnimation;

- (void)renderUI;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (id)init;
- (void)layoutSubviews;
- (id)initWithContent:(id)a0;
- (void)resetLayout;

@end
