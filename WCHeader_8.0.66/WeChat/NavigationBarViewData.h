@class NavigationSubItemViewData, TextViewData, NavigationCtrlItem;

@interface NavigationBarViewData : WXPBGeneratedMessage

@property (retain, nonatomic) TextViewData *title;
@property (retain, nonatomic) NavigationSubItemViewData *subItem;
@property (retain, nonatomic) NavigationCtrlItem *rightItem;
@property (retain, nonatomic) NavigationCtrlItem *leftItem;

+ (void)initialize;

@end
