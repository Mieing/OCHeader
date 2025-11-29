@class NSString, MegaVideoFeed, MegaVideoChannel, MegaVideoFeedLite, MegaVideoPlayerDetailAnimationParams;

@interface MegaVideoPlayerDetailOpenParam : WXPBGeneratedMessage

@property (nonatomic) unsigned int commentScene;
@property (retain, nonatomic) NSString *playSessionId;
@property (nonatomic) long long playerId;
@property (nonatomic) BOOL forceLandscape;
@property (nonatomic) int getRelatedListScene;
@property (retain, nonatomic) NSString *fromSessionId;
@property (retain, nonatomic) NSString *listModelTicket;
@property (nonatomic) int listType;
@property (retain, nonatomic) MegaVideoFeed *feed;
@property (retain, nonatomic) MegaVideoFeedLite *feedLite;
@property (nonatomic) int channelPlayerDetailEnterType;
@property (retain, nonatomic) MegaVideoChannel *channel;
@property (nonatomic) BOOL enterFromMinimize;
@property (nonatomic) int startPlayPosition;
@property (nonatomic) BOOL autoPlay;
@property (nonatomic) int playerLevel;
@property (nonatomic) BOOL showEnterAnimation;
@property (retain, nonatomic) MegaVideoPlayerDetailAnimationParams *enterAnimationParams;

+ (void)initialize;

@end
