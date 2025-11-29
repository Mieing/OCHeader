@class UIColor, NSString, UIImage;

@interface MMMultiMenuItem : NSObject

@property (nonatomic) long long editingStyle;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) NSString *nsTitle;
@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) UIImage *highlightedIcon;
@property (nonatomic) double menuItemWidth;
@property (nonatomic) BOOL bIsLoading;
@property (nonatomic) BOOL bothShowIconAndTitle;
@property (retain, nonatomic) MMMultiMenuItem *confirmMenuItem;
@property (retain, nonatomic) UIColor *titleColor;
@property (nonatomic) double titleFontSize;
@property (nonatomic) double menuContentLeftMargin;
@property (nonatomic) BOOL configCustomMenuButton;
@property (nonatomic) BOOL forceUseItemBackgroundColor;
@property (copy, nonatomic) id /* block */ getMenuButtonCallback;
@property (copy, nonatomic) id /* block */ clickAction;
@property (copy, nonatomic) id /* block */ buttonExtraConfigBlock;
@property (nonatomic) BOOL swipeToTrigger;

- (void).cxx_destruct;

@end
