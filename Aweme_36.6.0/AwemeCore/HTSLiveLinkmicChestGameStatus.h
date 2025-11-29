@class HTSLiveWaitChestOpenInfo, NSString, HTSLiveCardEffectInfo, HTSLiveChestOpenedInfo;

@interface HTSLiveLinkmicChestGameStatus : IESLivePBBaseMessage

@property (nonatomic) long long chestGameId;
@property (nonatomic) int status;
@property (nonatomic) int sourcePlayMode;
@property (retain, nonatomic) HTSLiveWaitChestOpenInfo *waitChestOpenInfo;
@property (nonatomic) BOOL hasWaitChestOpenInfo;
@property (retain, nonatomic) HTSLiveChestOpenedInfo *chestOpenedInfo;
@property (nonatomic) BOOL hasChestOpenedInfo;
@property (retain, nonatomic) HTSLiveCardEffectInfo *cardEffectiveInfo;
@property (nonatomic) BOOL hasCardEffectiveInfo;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end
