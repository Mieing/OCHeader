@class HTSLiveCommon, HTSLiveBattleSettings;

@interface HTSLiveLinkMicEnterNoticeMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) HTSLiveBattleSettings *battleSettings;
@property (nonatomic) BOOL hasBattleSettings;

+ (id)descriptor;

@end
