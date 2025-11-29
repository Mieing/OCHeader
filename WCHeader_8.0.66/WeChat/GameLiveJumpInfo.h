@class NSString, GameLiveJumpInfo_FinderLiveWxaGameInfo, GameLiveJumpInfo_FinderLiveFineGameInfo;

@interface GameLiveJumpInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int timestamp;
@property (retain, nonatomic) NSString *gameName;
@property (nonatomic) unsigned int gameType;
@property (retain, nonatomic) GameLiveJumpInfo_FinderLiveFineGameInfo *fineGameInfo;
@property (retain, nonatomic) GameLiveJumpInfo_FinderLiveWxaGameInfo *wxaGameInfo;
@property (nonatomic) BOOL isShowEntrance;
@property (retain, nonatomic) NSString *reportInfo;

+ (void)initialize;

@end
