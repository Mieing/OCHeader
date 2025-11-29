@class NSString;

@interface WCFinderTLNavTabsViewConfig : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *accessibilityLabel;
@property (nonatomic) long long tabType;
@property (nonatomic) long long imageStyle;
@property (retain, nonatomic) NSString *selectedIconName;
@property (retain, nonatomic) NSString *normalIconName;
@property (nonatomic) long long refreshStyle;
@property (readonly, nonatomic) long long category;

- (id)initWithTitle:(id)a0 accessibilityLabel:(id)a1 tabType:(long long)a2;
- (id)configTagWithImageStyle:(long long)a0 normalIconName:(id)a1 selectedIconName:(id)a2;
- (id)configTagWithImageStyle:(long long)a0 refreshStyle:(long long)a1;
- (void).cxx_destruct;

@end
