@class UILabel, UIImageView, ChatBotBubblePopConfig;

@interface ChatBotBubblePopView : UIView

@property (retain, nonatomic) UILabel *textLabel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } popBeforFrame;
@property (retain, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) ChatBotBubblePopConfig *bubbleConfig;
@property (nonatomic) BOOL hasPopped;

- (id)initWithConfig:(id)a0;
- (void)setupView;
- (void)setupLabel;
- (void)setupImage;
- (void)PopMsgBubble;
- (void)PopMsgBubble:(id)a0;
- (void)disMissMsgBubble;
- (void)PopRecoverableBubble:(id /* block */)a0;
- (void)PopRecoverableBubble;
- (void).cxx_destruct;

@end
