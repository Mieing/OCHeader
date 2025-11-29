@class NSString, UIView;

@interface CJPayTabBarCustomViewItem : NSObject <CJPayTabBarItemPrivateProtocol, CJPayTabBarItemProtocol>

@property (retain, nonatomic) UIView *defaultView;
@property (retain, nonatomic) UIView *selectedView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemWithDefaultView:(id)a0 selectedView:(id)a1;

- (id)itemWithAutoFitWidth:(BOOL)a0 preferItemWidth:(double)a1 tabBarHeight:(double)a2 type:(long long)a3;
- (void).cxx_destruct;

@end
