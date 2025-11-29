@class GameIndex4FeedsBlock_GameTemplate, NSString, GameIndex4FeedsBlock_CreateTopicTemplate, GameIndex4FeedsBlock_GameListTemplate, GameIndex4FeedsBlock_RecommendGameTemplate, GameIndex4FeedsBlock_LiveTemplate, GameIndex4FeedsBlock_Corner, GameIndex4FeedsBlock_MoreGameTemplate, GameIndex4FeedsBlock_NoPlayGameTemplate, GameIndex4FeedsBlock_MatchTemplate, GameIndex4FeedsBlock_ImageTextTemplate, GameIndex4FeedsBlock_VideoTemplate;

@interface GameIndex4FeedsBlock : WXPBGeneratedMessage

@property (nonatomic) unsigned int tplId;
@property (nonatomic) unsigned int positionId;
@property (retain, nonatomic) NSString *externInfo;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *jumpUrl;
@property (retain, nonatomic) GameIndex4FeedsBlock_ImageTextTemplate *imageText;
@property (retain, nonatomic) GameIndex4FeedsBlock_VideoTemplate *video;
@property (retain, nonatomic) GameIndex4FeedsBlock_LiveTemplate *live;
@property (retain, nonatomic) GameIndex4FeedsBlock_MatchTemplate *match;
@property (retain, nonatomic) GameIndex4FeedsBlock_GameTemplate *game;
@property (retain, nonatomic) GameIndex4FeedsBlock_NoPlayGameTemplate *noPlayGame;
@property (retain, nonatomic) GameIndex4FeedsBlock_GameListTemplate *gameList;
@property (retain, nonatomic) GameIndex4FeedsBlock_CreateTopicTemplate *createTopic;
@property (retain, nonatomic) GameIndex4FeedsBlock_MoreGameTemplate *moreGame;
@property (retain, nonatomic) GameIndex4FeedsBlock_RecommendGameTemplate *recommendGame;
@property (retain, nonatomic) GameIndex4FeedsBlock_Corner *leftCorner;
@property (retain, nonatomic) GameIndex4FeedsBlock_Corner *rightCorner;

+ (void)initialize;

@end
