@class WCFinderLiveThemeTag, FinderAdExtInfo, FinderLiveStreamPlayTogetherInfo, FinderLiveInteractionEntryContainerInfo, NSMutableArray, WCFinderLiveCardProductShowcase, FinderBannerExtInfo, FinderLiveRelatedExtInfo, NSString, WCFinderDataItem, FinderObjectMonotonicData_LiveIndependentData, WCFinderLiveAggregationCard, FinderNpsSurveyInfo, WCFinderLiveStreamNoticeCard, FinderLiveCardHighlightTag, WCFinderLiveStreamJumpModel;

@interface WCFinderLiveStreamElementModel : NSObject

@property (nonatomic) unsigned long long layoutId;
@property (nonatomic) int style;
@property (retain, nonatomic) FinderObjectMonotonicData_LiveIndependentData *originLiveMonoData;
@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (retain, nonatomic) NSString *h5Url;
@property (retain, nonatomic) WCFinderLiveStreamNoticeCard *noticeCard;
@property (retain, nonatomic) NSMutableArray *relateLivingDataItems;
@property (retain, nonatomic) WCFinderLiveStreamJumpModel *jumpModel;
@property (retain, nonatomic) FinderBannerExtInfo *bannerExtInfo;
@property (retain, nonatomic) FinderLiveRelatedExtInfo *relatedExtInfo;
@property (retain, nonatomic) NSString *objectWording;
@property (retain, nonatomic) FinderAdExtInfo *adExtInfo;
@property (retain, nonatomic) FinderLiveCardHighlightTag *highlightTag;
@property (retain, nonatomic) WCFinderLiveAggregationCard *aggregationCard;
@property (retain, nonatomic) WCFinderLiveThemeTag *themeTag;
@property (retain, nonatomic) WCFinderLiveCardProductShowcase *productShowcase;
@property (retain, nonatomic) FinderLiveStreamPlayTogetherInfo *entertainmentInfo;
@property (retain, nonatomic) FinderNpsSurveyInfo *npsSurveyInfo;
@property (nonatomic) unsigned long long subStyle;
@property (nonatomic) int recommendReasonType;
@property (retain, nonatomic) NSMutableArray *likeList;
@property (retain, nonatomic) FinderLiveInteractionEntryContainerInfo *interactionEntryContainerInfo;

+ (id)finderLiveStreamElementModelFrom:(id)a0;

- (unsigned long long)getExposeStartTs;
- (void)setExposeStartTs:(unsigned long long)a0;
- (unsigned long long)getExposeValidRatioFirstStartTs;
- (void)setExposeValidRatioFirstStartTs:(unsigned long long)a0;
- (unsigned long long)getExposeValidRatioStartTs;
- (void)setExposeValidRatioStartTs:(unsigned long long)a0;
- (unsigned int)getExposeValidRatioTime;
- (void)setExposeValidRatioTime:(unsigned int)a0;
- (unsigned long long)getAutoPlayStartTs;
- (void)setAutoPlayStartTs:(unsigned long long)a0;
- (unsigned int)getAutoPlayTime;
- (void)setAutoPlayTime:(unsigned int)a0;
- (void)resetExposeSession;
- (void)updateFriendLikeData:(id)a0;
- (id)toFinderLiveStreamCard;
- (void).cxx_destruct;

@end
