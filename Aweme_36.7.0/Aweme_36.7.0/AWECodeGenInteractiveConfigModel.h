@class NSString;

@interface AWECodeGenInteractiveConfigModel : AWEBaseDataModel

@property (nonatomic) BOOL hideRecommendationModule;
@property (nonatomic) BOOL hideIntroCard;
@property (nonatomic) BOOL hideIntroCardTags;
@property (nonatomic) BOOL hideIntroCardDetailsModule;
@property (nonatomic) BOOL hideDeskGuide;
@property (copy, nonatomic) NSString *recommendationModuleTitleCopy;
@property (copy, nonatomic) NSString *moreSeriesModuleCopy;
@property (copy, nonatomic) NSString *collectionButtonCopy;
@property (copy, nonatomic) NSString *unlockButtonCopy;
@property (nonatomic) BOOL hideMoreSeriesModule;
@property (nonatomic) BOOL hideMoreSeriesBottomBtn;
@property (nonatomic) BOOL hideFindTopTab;
@property (nonatomic) BOOL displayDetailEditButton;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
