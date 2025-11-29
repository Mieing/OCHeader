@class UIFont, NSString, AWEConcernCardModel, AWEMarkViewUIConfigModel;

@interface AWEFeedVideoSingleCardLayoutAdjuster : NSObject <AWEFeedVideoSingleCardLayoutAdjusterProtocol>

@property (nonatomic) long long adjustType;
@property (nonatomic) struct CGSize { double width; double height; } avatarSize;
@property (retain, nonatomic) UIFont *authorNameFont;
@property (nonatomic) double authorNameFontSize;
@property (retain, nonatomic) UIFont *publishTimeFont;
@property (nonatomic) double publishTimeFontSize;
@property (nonatomic) BOOL feedbackAlignName;
@property (retain, nonatomic) UIFont *descFont;
@property (nonatomic) double descFontSize;
@property (nonatomic) double contentLineHeight;
@property (nonatomic) double contentBottomMargin;
@property (nonatomic) BOOL hashTagNoBold;
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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)layoutAdjustType;

@end
