@class UILabel;

@interface ACCMusicTrimBubbleView : UIView

@property (retain, nonatomic) UILabel *textLabel;

+ (double)calculateAppropriateBubbleViewWidthWithText:(id)a0 horizontalGap:(double)a1;

- (void)updateTextColor:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;
- (void)updateText:(id)a0;

@end
