@class FinderLiveAggregationCard, FinderAdExtInfo, FinderLiveCardProductShowcase, FinderLiveStreamNoticeCard, FinderLiveStreamPlayTogetherInfo, NSMutableArray, FinderLiveInteractionEntryContainerInfo, FinderBannerExtInfo, FinderLiveRelatedExtInfo, NSString, FinderLiveStreamJumper, FinderObject, FinderNpsSurveyInfo, FinderLiveCardHighlightTag, FinderLiveThemeTag, FinderLiveRecentWatchExtInfo;

@interface FinderLiveStreamCard : WXPBGeneratedMessage

@property (nonatomic) unsigned long long layoutId;
@property (nonatomic) unsigned int style;
@property (retain, nonatomic) FinderObject *object;
@property (retain, nonatomic) NSString *h5Url;
@property (retain, nonatomic) FinderLiveStreamNoticeCard *noticeInfo;
@property (retain, nonatomic) NSMutableArray *relateLiving;
@property (retain, nonatomic) FinderLiveStreamJumper *jumper;
@property (retain, nonatomic) FinderBannerExtInfo *bannerExtinfo;
@property (retain, nonatomic) NSString *objectWording;
@property (retain, nonatomic) FinderLiveRelatedExtInfo *relatedExtInfo;
@property (retain, nonatomic) FinderAdExtInfo *adExtinfo;
@property (retain, nonatomic) FinderLiveCardHighlightTag *highlightTag;
@property (retain, nonatomic) FinderLiveAggregationCard *aggregationCard;
@property (retain, nonatomic) FinderLiveThemeTag *themeTag;
@property (retain, nonatomic) FinderLiveCardProductShowcase *productShowcase;
@property (retain, nonatomic) FinderLiveStreamPlayTogetherInfo *playTogetherInfo;
@property (nonatomic) unsigned int subStyle;
@property (retain, nonatomic) FinderLiveRecentWatchExtInfo *recentWatchExtInfo;
@property (retain, nonatomic) FinderNpsSurveyInfo *npsSurveyInfo;
@property (retain, nonatomic) FinderLiveInteractionEntryContainerInfo *interactionEntryContainerInfo;

+ (void)initialize;

@end
