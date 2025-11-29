@class NSString, UIImage, NSAttributedString, DUXTabBarUIConfigModel;

@interface DUXTabBarTextIconItem : NSObject <DUXTabBarItemPrivateProtocol, DUXTabBarItemProtocol>

@property (copy, nonatomic) NSAttributedString *defaultText;
@property (copy, nonatomic) NSAttributedString *selectedText;
@property (retain, nonatomic) UIImage *defaultIcon;
@property (retain, nonatomic) UIImage *selectedIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long enlargeType;
@property (retain, nonatomic) DUXTabBarUIConfigModel *uiConfig;

+ (id)itemWithDefaultText:(id)a0 selectedText:(id)a1 defaultIcon:(id)a2 selectedIcon:(id)a3;

- (id)itemWithAutoFitWidth:(BOOL)a0 preferItemWidth:(double)a1 tabBarHeight:(double)a2 type:(long long)a3;
- (void).cxx_destruct;

@end
