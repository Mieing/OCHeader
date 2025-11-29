@class NSString;

@interface InteractiveConfigV2 : GPBMessage

@property (nonatomic) BOOL hideRecommendationModule;
@property (nonatomic) BOOL hasHideRecommendationModule;
@property (nonatomic) BOOL hideIntroCard;
@property (nonatomic) BOOL hasHideIntroCard;
@property (nonatomic) BOOL hideIntroCardTags;
@property (nonatomic) BOOL hasHideIntroCardTags;
@property (nonatomic) BOOL hideIntroCardDetailsModule;
@property (nonatomic) BOOL hasHideIntroCardDetailsModule;
@property (nonatomic) BOOL hideDeskGuide;
@property (nonatomic) BOOL hasHideDeskGuide;
@property (copy, nonatomic) NSString *recommendationModuleTitleCopy;
@property (nonatomic) BOOL hasRecommendationModuleTitleCopy;
@property (copy, nonatomic) NSString *moreSeriesModuleCopy;
@property (nonatomic) BOOL hasMoreSeriesModuleCopy;
@property (copy, nonatomic) NSString *collectionButtonCopy;
@property (nonatomic) BOOL hasCollectionButtonCopy;
@property (copy, nonatomic) NSString *unlockButtonCopy;
@property (nonatomic) BOOL hasUnlockButtonCopy;
@property (nonatomic) BOOL hideMoreSeriesModule;
@property (nonatomic) BOOL hasHideMoreSeriesModule;
@property (nonatomic) BOOL hideMoreSeriesBottomBtn;
@property (nonatomic) BOOL hasHideMoreSeriesBottomBtn;
@property (nonatomic) BOOL hideFindTopTab;
@property (nonatomic) BOOL hasHideFindTopTab;
@property (nonatomic) BOOL displayDetailEditButton;
@property (nonatomic) BOOL hasDisplayDetailEditButton;

+ (id)descriptor;

@end
