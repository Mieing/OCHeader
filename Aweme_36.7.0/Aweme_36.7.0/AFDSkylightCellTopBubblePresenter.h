@class NSString, NSAttributedString, NSTimer;

@interface AFDSkylightCellTopBubblePresenter : AFDSkylightBasePresenter

@property (retain, nonatomic) NSAttributedString *notesAttributedStr;
@property (nonatomic) unsigned long long bubbleType;
@property (copy, nonatomic) NSString *notesText;
@property (nonatomic) long long audioDuration;
@property (retain, nonatomic) NSTimer *autoHideTimer;
@property (copy, nonatomic) id /* block */ timerFiredBlock;

- (double)autoDismissTime;
- (unsigned long long)componentViewPosition;
- (void)updateView:(id)a0;
- (void)hideBubble;
- (void)startAutoHideIfNeeded;
- (void)dismissBubble:(id /* block */)a0;
- (void)showBubbleWithAnimation:(BOOL)a0;
- (struct CGSize { double x0; double x1; })calculateBubbleSize;
- (void).cxx_destruct;
- (id)bubbleView;
- (id)createView;

@end
