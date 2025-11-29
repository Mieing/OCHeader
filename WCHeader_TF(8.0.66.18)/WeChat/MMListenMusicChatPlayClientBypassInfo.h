@class MMListenItem, MMListenCategoryItem, MMListenRecommendInfo;

@interface MMListenMusicChatPlayClientBypassInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int dailylistConsumeType;
@property (retain, nonatomic) MMListenCategoryItem *playingCategoryItem;
@property (retain, nonatomic) MMListenItem *playingListenItem;
@property (nonatomic) unsigned int playSongTtsType;
@property (retain, nonatomic) MMListenRecommendInfo *recommendInfo;

+ (void)initialize;

@end
