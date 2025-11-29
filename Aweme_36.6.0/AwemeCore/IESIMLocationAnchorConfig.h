@class AWEIMUser, NSString;

@interface IESIMLocationAnchorConfig : NSObject

@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) AWEIMUser *user;
@property (copy, nonatomic) NSString *iconBackgroundName;
@property (copy, nonatomic) NSString *titleIconName;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) double iconWidthHeight;
@property (nonatomic) double iconBackgroundWidth;
@property (nonatomic) double iconBackgroundHeight;
@property (nonatomic) double titleBackgroundHeight;
@property (nonatomic) double titleMinLeftRightMargin;
@property (nonatomic) double titleFontSize;
@property (nonatomic) double titleHeight;
@property (nonatomic) double iconAndTitlePadding;
@property (nonatomic) BOOL enableAnimation;
@property (nonatomic) double anchorWidth;

- (void).cxx_destruct;

@end
