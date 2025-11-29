@class UIColor, NSArray, UIStackView, NSString, UIView, UIFont;

@interface IESECommerceLightTabView : UIView

@property (copy, nonatomic) NSArray *tabButtonArray;
@property (retain, nonatomic) UIStackView *headerStackView;
@property (retain, nonatomic) UIColor *indicatorBackgroundColor;
@property (nonatomic) long long tabType;
@property (copy, nonatomic) NSString *selectedTabText;
@property (nonatomic) double tabWidth;
@property (copy, nonatomic) NSArray *tabsArray;
@property (copy, nonatomic) NSArray *tabEventUIDArray;
@property (retain, nonatomic) UIView *selectedIndicator;
@property (nonatomic) unsigned long long currentSelectedIndex;
@property (copy, nonatomic) id /* block */ switchTab;
@property (retain, nonatomic) UIFont *selectedFont;
@property (retain, nonatomic) UIColor *selectedColor;
@property (retain, nonatomic) UIFont *normalFont;
@property (retain, nonatomic) UIColor *normalColor;
@property (nonatomic) long long enterFrom;

- (void)updateSelectedIndex:(unsigned long long)a0;
- (void)updateTabsWithTabsArray:(id)a0 tabIDs:(id)a1;
- (id)initWithTabs:(id)a0 defaultSelectedIndex:(unsigned long long)a1 forTabType:(long long)a2 width:(double)a3;
- (id)initWithTabs:(id)a0 defaultSelectedIndex:(unsigned long long)a1 forTabType:(long long)a2;
- (void)reRenderUI;
- (void)btnClick:(id)a0;
- (id)areaTrackStringWithEventID:(id)a0;
- (void)udpateSelectedTab:(id)a0;
- (void)updateSelectedTab:(unsigned long long)a0 labelText:(id)a1;
- (void).cxx_destruct;
- (void)setupUI;
- (double)spaceWidth;

@end
