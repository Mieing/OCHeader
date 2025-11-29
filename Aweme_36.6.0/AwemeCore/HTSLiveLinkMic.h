@class HTSLiveLinkMic_LinkMicBattleSetting, NSString, HTSLiveLinkMic_LinkMicChannelInfo, NSMutableArray;

@interface HTSLiveLinkMic : IESLivePBBaseMessage

@property (nonatomic) long long channelId;
@property (retain, nonatomic) HTSLiveLinkMic_LinkMicChannelInfo *channelInfo;
@property (nonatomic) BOOL hasChannelInfo;
@property (retain, nonatomic) NSMutableArray *battleScoresArray;
@property (readonly, nonatomic) unsigned long long battleScoresArray_Count;
@property (retain, nonatomic) HTSLiveLinkMic_LinkMicBattleSetting *battleSettings;
@property (nonatomic) BOOL hasBattleSettings;
@property (copy, nonatomic) NSString *rivalAnchorId;
@property (nonatomic) long long linkmicAnchorCount;

+ (id)descriptor;

@end
