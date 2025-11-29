@class UIView;

@interface AWEInnerPushCommonViewConfigModel : NSObject

@property (nonatomic) BOOL hasLeftIcon;
@property (nonatomic) struct CGSize { double width; double height; } leftIconSize;
@property (nonatomic) double leftIconRadius;
@property (weak, nonatomic) UIView *leftIconShowingView;
@property (nonatomic) double leftIconToMiddArea;
@property (nonatomic) double leftOffset;
@property (nonatomic) BOOL hasLeftExtra;
@property (nonatomic) double leftExtraIconLength;
@property (nonatomic) double leftExtraIconTrailingOffset;
@property (nonatomic) double leftExtraIconBottomOffset;
@property (nonatomic) double leftExtraIconRadius;
@property (nonatomic) double leftExtraBackgroundRadius;
@property (nonatomic) BOOL hasRightActionArea;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } rightActionInsets;
@property (weak, nonatomic) UIView *rightActionShowingView;
@property (nonatomic) double rightActionContentWidth;
@property (nonatomic) double rightActionContentHeight;

- (void).cxx_destruct;

@end
