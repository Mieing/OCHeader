@interface WCFinderTagListViewOptions : NSObject

@property (nonatomic) long long limitCount;
@property (nonatomic) long long maxCharecterCount;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (nonatomic) struct CGSize { double width; double height; } itemPadding;
@property (nonatomic) struct CGSize { double width; double height; } labelStretchSize;
@property (nonatomic) double titleFontSize;
@property (nonatomic) BOOL supportExpand;
@property (nonatomic) double expandButtonLeftLeastPadding;
@property (nonatomic) double expandButtonRightPadding;
@property (nonatomic) long long closeStyle;
@property (nonatomic) BOOL displayBubble;

- (id)init;

@end
