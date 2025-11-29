@class UIColor, CContact, NSString, UIImage;

@interface MMScrollActionSheetItem : NSObject

@property (nonatomic) int itemType;
@property (retain, nonatomic) CContact *oContact;
@property (retain, nonatomic) UIImage *iconImg;
@property (retain, nonatomic) UIImage *cornerImg;
@property (retain, nonatomic) UIColor *backgroundColor;
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
@property (nonatomic) unsigned long long redDotType;
@property (nonatomic) BOOL disableDismissActionOnTapped;
@property (retain, nonatomic) UIColor *highlightMaskColor;
@property (copy, nonatomic) id /* block */ action;
@property (copy, nonatomic) id /* block */ onItemViewCreate;
@property (copy, nonatomic) id /* block */ onItemViewExpose;

- (id)init;
- (void).cxx_destruct;

@end
