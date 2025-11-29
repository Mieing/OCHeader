@class GameCenterBaseMsg, GameLifeFindMoreFriendEntranceInfo;

@interface GameFindEntryRedDotInfo : NSObject

@property (retain, nonatomic, getter=getGameCenterMsg) GameCenterBaseMsg *gameCenterMsg;
@property (retain, nonatomic, getter=getGameLifeInfo) GameLifeFindMoreFriendEntranceInfo *gameLifeInfo;
@property (nonatomic) BOOL isRedPointExposured;
@property (nonatomic) BOOL isRedPointCompleteExposured;
@property (nonatomic) BOOL isRedPointHalfExposured;

- (void).cxx_destruct;

@end
