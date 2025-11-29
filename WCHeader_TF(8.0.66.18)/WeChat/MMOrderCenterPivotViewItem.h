@class UIViewController, MMOrderCenterPivotTabView;

@interface MMOrderCenterPivotViewItem : NSObject

@property (retain, nonatomic) MMOrderCenterPivotTabView *tabView;
@property (retain, nonatomic) UIViewController *viewController;
@property (nonatomic) BOOL viewControllerAttached;
@property (nonatomic) unsigned int orderType;
@property (nonatomic) BOOL hideNumber;

- (id)initWithDisplayName:(id)a0 numbering:(long long)a1 viewController:(id)a2 orderType:(unsigned int)a3;
- (void).cxx_destruct;

@end
