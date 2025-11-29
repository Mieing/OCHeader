@class NSDictionary, NSArray, UITableViewCell;

@interface AWEIMCustomMenuComponentContext : NSObject

@property (nonatomic) unsigned long long contextType;
@property (copy, nonatomic) NSDictionary *extraDict;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bubbleFrameInScreen;
@property (nonatomic) struct CGPoint { double x; double y; } tapLocationInScreen;
@property (copy, nonatomic) NSArray *menuItemList;
@property (nonatomic) BOOL moreEmoticon;
@property (retain, nonatomic) UITableViewCell *cell;
@property (nonatomic) unsigned long long menuPanelOptions;
@property (nonatomic) struct CGPoint { double x; double y; } highLocation;
@property (nonatomic) struct CGPoint { double x; double y; } lowLocation;
@property (nonatomic) BOOL tryHighLocationFirst;

- (void).cxx_destruct;

@end
