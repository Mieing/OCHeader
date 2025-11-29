@class GamePlayTogetherDynamicItemList, FinderLiveGameInfo, FinderLiveGamePlayTogether_TopRightCornerInfo, NSString, FinderLiveGamePlayTogether_AudienceThreeDimensionalTipsInfo;

@interface FinderLiveGamePlayTogether : WXPBGeneratedMessage

@property (retain, nonatomic) GamePlayTogetherDynamicItemList *itemList;
@property (retain, nonatomic) FinderLiveGamePlayTogether_TopRightCornerInfo *cornerInfo;
@property (retain, nonatomic) FinderLiveGameInfo *teamUpInfo;
@property (retain, nonatomic) NSString *bottomWording;
@property (retain, nonatomic) NSString *playTogetherBubbleWording;
@property (nonatomic) unsigned int platformId;
@property (retain, nonatomic) FinderLiveGamePlayTogether_AudienceThreeDimensionalTipsInfo *threeDimensionalTipsInfo;
@property (nonatomic) BOOL liveInThreeDimensionalDirecting;
@property (nonatomic) BOOL selfIsThreeDimensionalDirector;

+ (void)initialize;

@end
