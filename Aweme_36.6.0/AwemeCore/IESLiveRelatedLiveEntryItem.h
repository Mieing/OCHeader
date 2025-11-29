@class UIColor, NSString, HTSLiveToolbarItem, HTSLiveImage, UIView;

@interface IESLiveRelatedLiveEntryItem : NSObject

@property (retain, nonatomic) HTSLiveImage *iconImage;
@property (copy, nonatomic) NSString *iconImageName;
@property (copy, nonatomic) NSString *entryTitle;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) NSString *gradientColor;
@property (retain, nonatomic) HTSLiveToolbarItem *toolbarItem;
@property (nonatomic) unsigned long long priority;
@property (copy, nonatomic) id /* block */ onItemTapped;
@property (copy, nonatomic) id /* block */ onItemShow;
@property (retain, nonatomic) UIView *paidTagView;
@property (retain, nonatomic) HTSLiveImage *headerImage;
@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSString *projectName;

- (void).cxx_destruct;

@end
