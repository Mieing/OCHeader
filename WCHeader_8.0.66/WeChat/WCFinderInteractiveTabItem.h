@class NSString;

@interface WCFinderInteractiveTabItem : NSObject

@property (nonatomic) long long tabType;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *iconName;
@property (retain, nonatomic) NSString *selectedIconName;
@property (retain, nonatomic) NSString *accessibilityLabel;
@property (nonatomic) unsigned long long pageId;
@property (retain, nonatomic) NSString *reportPageName;
@property (nonatomic) int searchTabType;

+ (id)makeItemWithType:(long long)a0;

- (void).cxx_destruct;

@end
