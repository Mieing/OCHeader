@class AWEFeedHomepageLongPressPanelSwitchItem, NSArray, AWEFeedHomepageLongPressPanelItem, NSString, UIImage;

@interface AWEFeedHomepageLongPressEditViewControllerConfig : NSObject

@property (retain, nonatomic) NSArray *panelItems;
@property (retain, nonatomic) AWEFeedHomepageLongPressPanelItem *selectedItem;
@property (retain, nonatomic) AWEFeedHomepageLongPressPanelSwitchItem *switchItem;
@property (nonatomic) long long panelStyle;
@property (retain, nonatomic) NSString *panelTitle;
@property (retain, nonatomic) UIImage *panelImage;
@property (retain, nonatomic) NSString *enterMethod;

- (void).cxx_destruct;

@end
