@class UIColor, UIFont, NSString, UIImage, NSNumber;

@interface AWEPOIMarkViewUIConfigModel : NSObject

@property (retain, nonatomic) UIImage *markImage;
@property (retain, nonatomic) NSNumber *markWidthBetweenImageAndText;
@property (retain, nonatomic) NSNumber *markLeftMargin;
@property (retain, nonatomic) NSNumber *markRightMargin;
@property (retain, nonatomic) NSNumber *markCornerRadius;
@property (retain, nonatomic) NSNumber *spaceBetweenMarkLabelAndVerticalSeperateLine;
@property (retain, nonatomic) NSNumber *spaceBetweenSeperateLineAndAdTag;
@property (nonatomic) double verticalSeperateLineHeight;
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

+ (id)model;

- (void).cxx_destruct;

@end
