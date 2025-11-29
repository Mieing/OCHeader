@class UIImage, NSString, NSMutableAttributedString;

@interface MMSnackBarConfig : NSObject

@property (nonatomic) double layoutWidth;
@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) NSString *iconName;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableAttributedString *attrTitle;
@property (nonatomic) int numberOfTitleLines;
@property (nonatomic) BOOL loading;
@property (nonatomic) BOOL blocked;
@property (nonatomic) double delayDisplayInterval;
@property (nonatomic) double delayHideInterval;
@property (retain, nonatomic) NSString *actionTitle;
@property (retain, nonatomic) NSMutableAttributedString *actionAttrTitle;
@property (retain, nonatomic) NSString *actionIconName;
@property (nonatomic) double bottomInsetOffset;
@property (retain, nonatomic) NSString *voiceOverLabel;
@property (retain, nonatomic) NSString *voiceOverHint;
@property (readonly, nonatomic) BOOL actionEnabled;
@property (readonly, nonatomic) BOOL isValid;

- (id)init;
- (void).cxx_destruct;

@end
