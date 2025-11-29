@interface AWEIMActionsViewLayoutContext : NSObject

@property (nonatomic) long long orientation;
@property (nonatomic) long long numberOfActions;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) double visibleWidth;
@property (nonatomic) double minimumButtonWidth;

@end
