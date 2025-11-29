@class UIFont, NSString, UIColor, DUXTabBarUIConfigModel;

@interface DUXTabBarTextItem : NSObject <DUXTabBarItemPrivateProtocol, DUXTabBarItemProtocol>

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIFont *defaultFont;
@property (retain, nonatomic) UIFont *selectedFont;
@property (retain, nonatomic) UIColor *defaultColor;
@property (retain, nonatomic) UIColor *selectedColor;
@property (nonatomic) unsigned long long enlargeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) DUXTabBarUIConfigModel *uiConfig;

+ (id)itemWithText:(id)a0 defaultFont:(id)a1 selectedFont:(id)a2 defaultColor:(id)a3 selectedColor:(id)a4;
+ (id)itemWithText:(id)a0 defaultColor:(id)a1 selectedColor:(id)a2;
+ (id)itemWithText:(id)a0 defaultColor:(id)a1 selectedColor:(id)a2 enlargeType:(unsigned long long)a3;

- (id)itemWithAutoFitWidth:(BOOL)a0 preferItemWidth:(double)a1 tabBarHeight:(double)a2 type:(long long)a3;
- (void).cxx_destruct;

@end
