@class NSString, NSAttributedString, UIImage, NSArray, AWEURLModel, AWEIMUILabelPresenterProps, NSNumber, UIColor;

@interface AWEIMCoverImageCardProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) id /* block */ tapActionBlock;
@property (copy, nonatomic) id /* block */ tapBtnActionBlock;
@property (nonatomic) BOOL imageClipsToBounds;
@property (nonatomic) double imageCornerRadius;
@property (nonatomic) double imageWidth;
@property (nonatomic) double imageHeight;
@property (nonatomic) double imageMarginLeft;
@property (retain, nonatomic) AWEURLModel *imageURLModel;
@property (retain, nonatomic) UIColor *imageBackgroundColor;
@property (retain, nonatomic) NSNumber *contentModeNum;
@property (retain, nonatomic) UIImage *backupImage;
@property (retain, nonatomic) UIColor *backupColor;
@property (retain, nonatomic) NSNumber *imageContainerHeightNum;
@property (retain, nonatomic) NSNumber *imageContainerWidthNum;
@property (nonatomic) BOOL hiddenImageBorderShapeView;
@property (nonatomic) BOOL shouldShowTag;
@property (retain, nonatomic) NSString *tagImageURLString;
@property (retain, nonatomic) NSString *tagImageName;
@property (retain, nonatomic) UIColor *tagColor;
@property (retain, nonatomic) UIColor *tagBackgroundColor;
@property (nonatomic) long long titleNumberOfLines;
@property (nonatomic) long long subtitleNumberOfLines;
@property (copy, nonatomic) NSAttributedString *titleAttrString;
@property (copy, nonatomic) NSAttributedString *subtitleAttrString;
@property (retain, nonatomic) AWEIMUILabelPresenterProps *tagLabelProps;
@property (nonatomic) double tailContainerTrailing;
@property (nonatomic) double tailContainerWidth;
@property (nonatomic) double tailContainerHeight;
@property (retain, nonatomic) NSString *tailBtnText;
@property (retain, nonatomic) UIColor *tailBtnColor;
@property (retain, nonatomic) UIColor *tailBtnBgColor;
@property (nonatomic) double tailBtnCornerRadius;
@property (retain, nonatomic) UIImage *tailBtnImage;
@property (copy, nonatomic) NSArray *imageURLModels;
@property (copy, nonatomic) NSArray *coverResources;
@property (nonatomic) BOOL useBackgroundView;
@property (nonatomic) double imageViewBorderWidth;
@property (retain, nonatomic) UIColor *imageViewBorderColor;

- (void).cxx_destruct;

@end
