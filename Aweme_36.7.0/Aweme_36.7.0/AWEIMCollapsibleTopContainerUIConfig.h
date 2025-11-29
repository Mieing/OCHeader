@class UIColor, NSString;

@interface AWEIMCollapsibleTopContainerUIConfig : NSObject

@property (retain, nonatomic) UIColor *backgroundColorWhenExpanded;
@property (retain, nonatomic) UIColor *backgroundColorWhenCollapsed;
@property (nonatomic) struct CGPoint { double x; double y; } origin;
@property (nonatomic) struct CGSize { double width; double height; } cornerRadii;
@property (nonatomic) BOOL hideDragHintView;
@property (copy, nonatomic) NSString *lightExpandedHexColor;
@property (copy, nonatomic) NSString *darkExpandedHexColor;
@property (nonatomic) BOOL isPadSplitting;

- (void).cxx_destruct;

@end
