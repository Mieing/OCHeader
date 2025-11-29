@class UITextView;

@interface IESLiveChatChannelListSystemCell : IESLiveChatChannelBaseCell

@property (retain, nonatomic) UITextView *contentTextView;

- (void)refreshWith:(id)a0;
- (void)longPress:(id)a0;
- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)loadView;

@end
