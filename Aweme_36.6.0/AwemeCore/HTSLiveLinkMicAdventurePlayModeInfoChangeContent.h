@class IESLiveAdventurePlayModeInfo;

@interface HTSLiveLinkMicAdventurePlayModeInfoChangeContent : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveAdventurePlayModeInfo *playModeInfo;
@property (nonatomic) BOOL hasPlayModeInfo;

+ (id)descriptor;

@end
