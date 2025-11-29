@class UIFont, NSString, UIColor, UIImage, NSArray, WCFinderFeedContentTempModel;
@protocol WCFinderStaticCoverCellMenuHandle;

@interface WCFinderStaticCoverCollectionViewCellConfig : NSObject

@property (nonatomic) unsigned long long componentFlag;
@property (nonatomic) unsigned long long topLeftViewType;
@property (nonatomic) unsigned long long bottomRightViewType;
@property (nonatomic) unsigned long long bottomRightViewFlag;
@property (nonatomic) unsigned long long bottomLeftViewFlag;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } bottomViewInsets;
@property (nonatomic) unsigned long long coverMaskType;
@property (nonatomic) double descriptionFontWeight;
@property (retain, nonatomic) UIFont *descriptionFont;
@property (copy, nonatomic) NSString *bottomRightViewCustomWording;
@property (copy, nonatomic) NSString *bottomRightCustomIconName;
@property (copy, nonatomic) NSString *maskTipsTitle;
@property (retain, nonatomic) UIFont *maskTipsFont;
@property (retain, nonatomic) UIImage *maskTipsIcon;
@property (retain, nonatomic) UIColor *coverBackGroundColor;
@property (nonatomic) unsigned long long descriptionMaxLine;
@property (retain, nonatomic) NSString *customLikeImageName;
@property (retain, nonatomic) WCFinderFeedContentTempModel *feedTempModel;
@property (retain, nonatomic) NSArray *customInfoItems;
@property (nonatomic) BOOL customCoverNoAutoPlay;
@property (nonatomic) BOOL autoPlayEndToNext;
@property (nonatomic) BOOL globalContinuePlay;
@property (nonatomic) BOOL forbidenInnerRecommandReason;
@property (nonatomic) BOOL showProgressBar;
@property (nonatomic) unsigned long long UIModeStyle;
@property (nonatomic) double descHorizontalPadding;
@property (retain, nonatomic) UIColor *customPostTimeColor;
@property (copy, nonatomic) NSString *customPostTimeContent;
@property (weak, nonatomic) id<WCFinderStaticCoverCellMenuHandle> longPressMenuHandle;

+ (id)defaultConfig;
+ (id)lifeHomeConfig;
+ (id)musicTopicConfig;
+ (id)membershipConfigIsAuthor:(BOOL)a0 membershipFlag:(BOOL)a1;
+ (id)membershipConfigIsAuthor:(BOOL)a0 membershipFlag:(BOOL)a1 customPostTimeColor:(id)a2 customPostTimeContent:(id)a3;
+ (id)InterestRelatedFeedFlowConfig;

- (id)init;
- (void).cxx_destruct;

@end
