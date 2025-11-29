@class NSString, UIImageView, UILabel, UIView;

@interface AWESearchFeelGoodDialogBubbleView : UIView

@property (retain, nonatomic) UIView *bubbleMainFrameView;
@property (retain, nonatomic) UIImageView *bubbleTail;
@property (retain, nonatomic) UILabel *bubbleLabel;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ tapActionBlock;

- (void)configureUI;
- (void)bubbleTaped;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
