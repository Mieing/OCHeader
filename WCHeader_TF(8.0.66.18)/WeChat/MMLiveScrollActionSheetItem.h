@class UIImage, UIColor, NSString;

@interface MMLiveScrollActionSheetItem : NSObject

@property (retain, nonatomic) UIImage *iconImg;
@property (retain, nonatomic) UIImage *cornerImg;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) BOOL isRoundBackground;
@property (retain, nonatomic) NSString *originIconUrl;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *itemId;
@property (retain, nonatomic) id userInfo;
@property (nonatomic) BOOL disable;
@property (nonatomic) BOOL isIconImgInDarkModeOnly;
@property (nonatomic) double alpha;
@property (nonatomic) long long row;
@property (retain, nonatomic) NSString *subTitle;
@property (nonatomic) long long titleMaxLine;
@property (nonatomic) long long subTitleMaxLine;
@property (retain, nonatomic) NSString *accessibilityLabelWording;
@property (copy, nonatomic) id /* block */ action;

- (id)init;
- (void).cxx_destruct;

@end
