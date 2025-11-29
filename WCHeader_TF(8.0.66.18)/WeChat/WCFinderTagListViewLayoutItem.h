@class NSString, WCFinderTagListItem;

@interface WCFinderTagListViewLayoutItem : NSObject

@property (retain, nonatomic) NSString *displayText;
@property (retain, nonatomic) WCFinderTagListItem *item;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;

- (void).cxx_destruct;

@end
