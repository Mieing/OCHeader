@class NSString, UIFont;

@interface AWEHomepageTopBarTabItemInfo : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL selected;
@property (nonatomic) double itemWidth;
@property (copy, nonatomic) NSString *itemType;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } itemPadding;
@property (retain, nonatomic) UIFont *tabFont;
@property (nonatomic) double showPercentage;

- (void).cxx_destruct;

@end
