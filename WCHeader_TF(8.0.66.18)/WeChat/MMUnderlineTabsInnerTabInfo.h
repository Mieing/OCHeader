@class MMUnderlineTabsBaseTabItem;

@interface MMUnderlineTabsInnerTabInfo : NSObject

@property (retain, nonatomic) MMUnderlineTabsBaseTabItem *item;
@property (nonatomic) double tabViewX;
@property (nonatomic) double tabViewWidth;
@property (nonatomic) double underLineViewWidth;
@property (nonatomic) BOOL selected;

- (void)callSelectStateChangeBlock;
- (void).cxx_destruct;

@end
