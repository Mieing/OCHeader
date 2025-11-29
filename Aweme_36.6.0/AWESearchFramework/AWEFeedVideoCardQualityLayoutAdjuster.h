@class UIColor, UIFont, AWEConcernCardModel, NSString, AWEMarkViewUIConfigModel;

@interface AWEFeedVideoCardQualityLayoutAdjuster : NSObject <AWEFeedVideoSingleCardLayoutAdjusterProtocol>

@property (nonatomic) long long descHighlightColor;
@property (nonatomic) struct CGSize { double width; double height; } avatarSize;
@property (retain, nonatomic) UIFont *authorNameFont;
@property (nonatomic) double authorNameFontSize;
@property (retain, nonatomic) UIFont *publishTimeFont;
@property (nonatomic) double publishTimeFontSize;
@property (nonatomic) BOOL feedbackAlignName;
@property (nonatomic) struct CGSize { double width; double height; } avatarTagSize;
@property (retain, nonatomic) UIFont *descFont;
@property (nonatomic) double descFontSize;
@property (retain, nonatomic) UIFont *heightlightFont;
@property (nonatomic) double heightlightSize;
@property (nonatomic) double contentLineHeight;
@property (nonatomic) double contentBottomMargin;
@property (nonatomic) BOOL hashTagNoBold;
@property (retain, nonatomic) UIColor *heightlightColor;
@property (nonatomic) BOOL heightlightNoClick;
@property (nonatomic) double videoCornerRadius;
@property (nonatomic) double bottomBarHeight;
@property (nonatomic) struct CGSize { double width; double height; } bottomBarIconSize;
@property (retain, nonatomic) UIFont *bottomBarTextFont;
@property (nonatomic) double bottomBarLeftMargin;
@property (nonatomic) double bottomBarRightMargin;
@property (nonatomic) double bottomBarImageTextMagin;
@property (nonatomic) double bottomBarTextArrowMagin;
@property (nonatomic) BOOL bottomBarAddBlurView;
@property (retain, nonatomic) UIFont *timeLblFont;
@property (nonatomic) struct CGSize { double width; double height; } playButtonIconSize;
@property (nonatomic) double playButtonRightBottomMargin;
@property (nonatomic) BOOL timeLabelCloseToPlayButton;
@property (retain, nonatomic) AWEMarkViewUIConfigModel *anchorUIConfigModel;
@property (nonatomic) double actionPanelLeadingTrailingMargin;
@property (nonatomic) double actionPanelHeight;
@property (nonatomic) struct CGSize { double width; double height; } actionPanelButtonIconSize;
@property (retain, nonatomic) UIFont *actionPanelButtonTextFont;
@property (nonatomic) BOOL isNeedAdjustLayout;
@property (retain, nonatomic) AWEConcernCardModel *cardModel;
@property (readonly, nonatomic) BOOL isNeedCustomVideoScaleMode;
@property (nonatomic) long long customVideoScaleMode;
@property (copy, nonatomic) NSString *referString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)drawQualityCornerOpt;

- (id)initWithCardModel:(id)a0;
- (void)configDefaultData:(id)a0;
- (struct CGSize { double x0; double x1; })videoAreaOptimizeWithContainerWidth:(double)a0 videoRawSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGSize { double x0; double x1; })videoAreaCutWithContainerWidth:(double)a0 videoRawSize:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;

@end
