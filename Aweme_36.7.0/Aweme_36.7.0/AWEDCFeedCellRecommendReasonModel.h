@class UIColor, NSString, NSArray, UIImage, AWEURLModel;

@interface AWEDCFeedCellRecommendReasonModel : NSObject

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *ID;
@property (copy, nonatomic) AWEURLModel *urlModel;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSArray *lightUrls;
@property (copy, nonatomic) NSArray *darkUrls;
@property (nonatomic) BOOL useV2;
@property (nonatomic) double containerHeight;
@property (nonatomic) double containerCornerRadius;
@property (retain, nonatomic) UIColor *containerColorInLight;
@property (retain, nonatomic) UIColor *containerColorInDark;
@property (nonatomic) double iconWidth;
@property (nonatomic) double iconHeight;
@property (retain, nonatomic) UIColor *iconPlaceholderColorInLight;
@property (retain, nonatomic) UIColor *iconPlaceholderColorInDark;
@property (nonatomic) double fontSize;
@property (retain, nonatomic) UIColor *textColorInLight;
@property (retain, nonatomic) UIColor *textColorInDark;
@property (nonatomic) double iconLeftMargin;
@property (nonatomic) double iconAndTextMargin;
@property (nonatomic) double textRightMargin;

- (void).cxx_destruct;
- (id)init;

@end
