@class UIView;

@interface MMUnderlineTabsBaseTabItem : NSObject

@property (nonatomic) double customTabViewTop;
@property (retain, nonatomic) UIView *tabView;
@property (nonatomic) double tabWidth;
@property (nonatomic) double underlineWidth;
@property (nonatomic) double autoUnderlineWidthExtension;
@property (copy, nonatomic) id /* block */ onSelectStateChangeBlock;

- (void).cxx_destruct;

@end
