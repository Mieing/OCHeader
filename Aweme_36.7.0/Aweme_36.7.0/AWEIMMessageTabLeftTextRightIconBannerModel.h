@class NSString, UIImage, UIColor;

@interface AWEIMMessageTabLeftTextRightIconBannerModel : NSObject

@property (copy, nonatomic) NSString *textString;
@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) UIColor *bannerNormalColor;
@property (retain, nonatomic) UIColor *bannerHighlightedColor;
@property (nonatomic) BOOL needBottomSeparatorLine;
@property (nonatomic) unsigned long long layoutStyle;
@property (nonatomic) double bannerHeight;
@property (nonatomic) double bannerWidth;
@property (copy, nonatomic) id /* block */ bannerTapBlock;
@property (copy, nonatomic) id /* block */ iconTapBlock;

- (void).cxx_destruct;

@end
