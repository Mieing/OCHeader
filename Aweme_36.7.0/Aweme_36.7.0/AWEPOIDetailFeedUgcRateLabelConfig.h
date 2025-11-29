@class UIFont, UIColor, AWEPOIDetailFeedUgcRateGradientExpandConfig, AWEPOIDetailFeedUgcRateTruncationConfig;

@interface AWEPOIDetailFeedUgcRateLabelConfig : NSObject

@property (retain, nonatomic) AWEPOIDetailFeedUgcRateGradientExpandConfig *gradientExpandConfig;
@property (retain, nonatomic) AWEPOIDetailFeedUgcRateTruncationConfig *expandTruncationConfig;
@property (retain, nonatomic) AWEPOIDetailFeedUgcRateTruncationConfig *collapseTruncationConfig;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) double maxWidth;
@property (nonatomic) double maxLines;
@property (nonatomic) double expandedMaxLines;
@property (nonatomic) long long typeID;
@property (nonatomic) BOOL disableClickTextTrack;

+ (id)rateInCommentConfig;
+ (id)rateConfig;
+ (id)rateInCommentOptConfig;
+ (id)replyConfig;
+ (id)rateConfigWithContainerWidth:(double)a0;
+ (id)replyNGConfigWithContainerWidth:(double)a0;
+ (id)replyConfigWithContainerWidth:(double)a0;
+ (id)generalConfigWithCotentFont:(id)a0 contentColor:(id)a1;
+ (id)rateInCommentConfigWithContainerWidth:(double)a0;
+ (id)rateInCommentOptConfigWithContainerWidth:(double)a0;
+ (id)rateInPhotosPreviewConfigWithContainerWidth:(double)a0;
+ (id)replyNGConfig;
+ (id)rateInPhotosPreviewConfig;

- (void).cxx_destruct;

@end
