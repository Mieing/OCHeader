@class UIColor, NSString, UIFont, UIImage, UIView;

@interface WCTableViewCellRightConfig : NSObject

@property (nonatomic) unsigned long long mode;
@property (copy, nonatomic) NSString *detail;
@property (retain, nonatomic) UIColor *detailColor;
@property (retain, nonatomic) UIFont *detailFont;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIView *rightView;
@property (retain, nonatomic) NSString *imageUrl;
@property (retain, nonatomic) NSString *tipsImageUrl;
@property (nonatomic) BOOL withRedDot;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL enableCopy;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) double detailMinWidth;
@property (nonatomic) unsigned long long accessoryType;
@property (retain, nonatomic) UIColor *accessoryColor;
@property (retain, nonatomic) UIColor *accessoryDisclosureIndicatorColor;
@property (nonatomic) SEL accssoryAction;
@property (weak, nonatomic) id accssoryTarget;
@property (nonatomic) BOOL accssoryOn;
@property (nonatomic) BOOL accssoryDisabled;
@property (nonatomic) double customAccessoryRightMargin;
@property (nonatomic) double customTitleLeft;
@property (copy, nonatomic) id /* block */ customViewCenter;
@property (copy, nonatomic) id /* block */ accessoryActionHandler;
@property (nonatomic) long long textAligment;
@property (nonatomic) BOOL ignoreAutoFitCellHeight;
@property (nonatomic) unsigned long long entryScene;

- (id)init;
- (void)addAccessoryTarget:(id)a0 action:(SEL)a1;
- (void).cxx_destruct;

@end
