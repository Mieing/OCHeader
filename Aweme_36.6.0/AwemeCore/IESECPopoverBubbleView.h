@class UIView, UIColor, IESECPopoverTailView;

@interface IESECPopoverBubbleView : UIView

@property (nonatomic) long long direction;
@property (retain, nonatomic) IESECPopoverTailView *tailView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) struct CGPoint { double x; double y; } tailPoint;
@property (nonatomic) double radius;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (retain, nonatomic) UIColor *bubbleBackgroundColor;
@property (nonatomic) double tailOffset;

- (void)refreshFrame;
- (void)updateTailDirection;
- (void)updateContentViewFrame;
- (void).cxx_destruct;
- (id)init;

@end
