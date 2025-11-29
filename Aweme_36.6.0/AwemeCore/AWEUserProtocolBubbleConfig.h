@class UIView;

@interface AWEUserProtocolBubbleConfig : NSObject

@property (nonatomic) double offset;
@property (nonatomic) struct CGPoint { double x; double y; } anchorOffset;
@property (weak, nonatomic) UIView *forView;
@property (weak, nonatomic) UIView *container;
@property (nonatomic) unsigned long long position;
@property (nonatomic) BOOL showCustomBubbleView;

- (void).cxx_destruct;
- (id)init;

@end
