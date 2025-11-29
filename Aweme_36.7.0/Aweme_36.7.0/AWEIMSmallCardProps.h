@class UIColor, NSString, NSArray, UIImage, NSAttributedString, NSNumber, AWEURLModel;

@interface AWEIMSmallCardProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) id /* block */ tapActionBlock;
@property (nonatomic) BOOL enableAlphaTap;
@property (nonatomic) BOOL disableBackgroundColor;
@property (nonatomic) BOOL imageClipsToBounds;
@property (nonatomic) double imageCornerRadius;
@property (nonatomic) double imageWidth;
@property (nonatomic) double imageHeight;
@property (nonatomic) double imageMarginLeft;
@property (retain, nonatomic) AWEURLModel *imageURLModel;
@property (retain, nonatomic) UIImage *backupImage;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *localImageName;
@property (retain, nonatomic) UIColor *imageBackgroundColor;
@property (retain, nonatomic) NSNumber *contentModeNum;
@property (copy, nonatomic) NSString *imageAccessibilityLabel;
@property (nonatomic) BOOL imageViewHasBackgroundGradient;
@property (copy, nonatomic) NSArray *imageViewBackgroundGradientColors;
@property (copy, nonatomic) NSArray *imageViewBackgroundGradientLocations;
@property (nonatomic) struct CGPoint { double x; double y; } imageViewBackgroundGradientStartPoint;
@property (nonatomic) struct CGPoint { double x; double y; } imageViewBackgroundGradientEndPoint;
@property (nonatomic) BOOL hiddenBorder;
@property (nonatomic) long long titleNumberOfLines;
@property (nonatomic) long long subtitleNumberOfLines;
@property (retain, nonatomic) NSNumber *titleMarginLeft;
@property (retain, nonatomic) NSNumber *titleMarginRight;
@property (copy, nonatomic) NSAttributedString *titleAttrString;
@property (copy, nonatomic) NSAttributedString *subtitleAttrString;

- (void).cxx_destruct;
- (id)init;

@end
