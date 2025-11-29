@class NSString, AWEGradientView;

@interface AWEUserWorkComponentUIAdapterConfig : NSObject <AWEUserWorkComponentUIAdapterConfigProtocol>

@property (nonatomic) double cellCornerRadius;
@property (nonatomic) double cellInteractionTopPadding;
@property (nonatomic) double waterFallBottomGradientViewHeight;
@property (retain, nonatomic) AWEGradientView *waterFallBottomGradientView;
@property (nonatomic) double waterFallTagFontSizeAdaptiveBigMode;
@property (nonatomic) double waterFallImageSizeAdaptiveBigMode;
@property (nonatomic) double waterFallTagHeightAdaptiveBigMode;
@property (nonatomic) long long waterFallTitleFontWeight;
@property (nonatomic) double authorNameFontSize;
@property (nonatomic) struct CGSize { double width; double height; } bottomLikeIconSize;
@property (nonatomic) double bottomLikeCountFontSizeAdaptiveBigMode;
@property (copy, nonatomic) NSString *bottomLikeCountColor;
@property (nonatomic) double topInfoLabelFontSize;
@property (nonatomic) double topInfoLabelHeight;
@property (nonatomic) double videoDurationFontSize;
@property (nonatomic) long long videoDurationFontWeight;
@property (nonatomic) double videoDurationBottomPadding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultUIConfigWithContext:(id)a0;

- (double)waterFallBottomGradientViewHeightWithContext:(id)a0;
- (id)waterFallBottomGradientViewWithContext:(id)a0;
- (struct CGSize { double x0; double x1; })defaultBottomLikeIconSize;
- (double)defaultBottomLikeCountFontSizeAdaptiveBigMode;
- (void).cxx_destruct;

@end
