@class UIColor, UIFont, NSString, UIImage, NSNumber;

@interface AWEMarkViewUIConfigModel : NSObject

@property (nonatomic) struct CGSize { double width; double height; } contentSizeForDoubleLine;
@property (retain, nonatomic) UIImage *markImage;
@property (nonatomic) double markImageTopMargin;
@property (nonatomic) double markImageLeftMargin;
@property (nonatomic) double markImageRightMargin;
@property (nonatomic) double firstLineItemMargin;
@property (nonatomic) double spaceBetweenTagAndLocLabel;
@property (nonatomic) double rightMargin;
@property (retain, nonatomic) NSNumber *markWidthBetweenImageAndText;
@property (retain, nonatomic) NSNumber *markLeftMargin;
@property (retain, nonatomic) NSNumber *markRightMargin;
@property (retain, nonatomic) NSNumber *markCornerRadius;
@property (retain, nonatomic) NSNumber *spaceBetweenMarkLabelAndVerticalSeperateLine;
@property (retain, nonatomic) NSNumber *spaceBetweenSeperateLineAndAdTag;
@property (retain, nonatomic) NSNumber *spaceBetweenDoubleLineMatter;
@property (nonatomic) long long separatorLineStyle;
@property (nonatomic) double verticalSeparateLineWidth;
@property (nonatomic) double verticalSeperateLineHeight;
@property (nonatomic) double verticalSeparateLineCornerRadius;
@property (retain, nonatomic) UIColor *seperateLineBackgroundColor;
@property (retain, nonatomic) UIColor *markLabelTextColor;
@property (retain, nonatomic) UIFont *markLabelTextFont;
@property (nonatomic) double markLabelTextAlpha;
@property (retain, nonatomic) UIImage *markBackgroundImage;
@property (retain, nonatomic) UIColor *containerViewBackgroundColor;
@property (retain, nonatomic) NSString *adTagText;
@property (retain, nonatomic) UIColor *adTagTextColor;
@property (retain, nonatomic) UIFont *adTagTextFont;
@property (retain, nonatomic) UIColor *tagTextColor;
@property (retain, nonatomic) UIFont *tagTextFont;
@property (nonatomic) BOOL needIconDarkBkg;
@property (nonatomic) double labelHeightWhenNotExpanded;
@property (nonatomic) double labelHeightWhenExpanded;
@property (nonatomic) struct CGSize { double width; double height; } markImageSize;
@property (nonatomic) BOOL hideArrow;
@property (retain, nonatomic) NSNumber *markLabelMinWidth;
@property (retain, nonatomic) NSNumber *containerHeight;
@property (nonatomic) double spaceBetweenAdTagAndSubTitle;
@property (nonatomic) double subTitleBottomMargin;
@property (retain, nonatomic) UIColor *subTitleTextColor;
@property (retain, nonatomic) UIFont *subTitleTextFont;
@property (retain, nonatomic) UIFont *matterTitleTextFont;
@property (nonatomic) BOOL needOptimizeSubtitleWidth;

+ (id)mainImageNamed:(id)a0;
+ (id)model;

- (void)p_configDetailOfVideoModel;
- (void)configDetailOfAnchorModel;
- (void)configDetailOfAnchorModelForNewStyle;
- (id)colorWithHexString:(id)a0 defaultColor:(id)a1;
- (void)configDetailOfVideoModel;
- (void)configDetailOfAnchorModelForNewStyleWithModel:(id)a0;
- (void).cxx_destruct;

@end
