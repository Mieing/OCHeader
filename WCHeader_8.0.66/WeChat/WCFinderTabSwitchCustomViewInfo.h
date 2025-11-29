@interface WCFinderTabSwitchCustomViewInfo : NSObject

@property (retain, nonatomic) Class viewClass;
@property (copy, nonatomic) id /* block */ layout;
@property (copy, nonatomic) id /* block */ configer;
@property (copy, nonatomic) id /* block */ updater;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } customBarInsets;

- (void).cxx_destruct;

@end
