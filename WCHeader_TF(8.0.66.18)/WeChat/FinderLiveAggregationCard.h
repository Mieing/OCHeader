@class NSData, NSString, FinderLiveAggregationCardButton, FinderThemeLiveStreamPreLoadConfig, FinderLiveAggregationCardBulletMsgList, FinderJumpInfo, NSMutableArray, FinderThemeLiveStreamAppearance;

@interface FinderLiveAggregationCard : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *cardId;
@property (nonatomic) unsigned int cardMode;
@property (nonatomic) unsigned int cardBackgroundMode;
@property (retain, nonatomic) NSMutableArray *cardBackgroundColor;
@property (retain, nonatomic) NSString *cardBackgroundImgUrl;
@property (retain, nonatomic) NSString *themeText;
@property (retain, nonatomic) NSString *themeImgUrl;
@property (retain, nonatomic) NSMutableArray *themeTextColor;
@property (retain, nonatomic) NSString *themeId;
@property (retain, nonatomic) NSMutableArray *object;
@property (retain, nonatomic) NSMutableArray *liveBackgroundColor;
@property (retain, nonatomic) FinderThemeLiveStreamAppearance *themeAppearance;
@property (retain, nonatomic) NSString *themeSubText;
@property (retain, nonatomic) NSMutableArray *themeSubTextColor;
@property (retain, nonatomic) NSData *cardBuffer;
@property (retain, nonatomic) NSMutableArray *anchorGroup;
@property (retain, nonatomic) NSMutableArray *productGroup;
@property (retain, nonatomic) FinderLiveAggregationCardBulletMsgList *bulletMsgList;
@property (nonatomic) unsigned int cardType;
@property (retain, nonatomic) FinderLiveAggregationCardButton *button;
@property (retain, nonatomic) FinderThemeLiveStreamPreLoadConfig *themePreloadConfig;
@property (nonatomic) unsigned int playTogetherLiveType;
@property (retain, nonatomic) FinderJumpInfo *jumpInfo;
@property (nonatomic) unsigned int groupRefreshTimeIntervalMs;

+ (void)initialize;

@end
