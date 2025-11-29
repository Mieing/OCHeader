@class HTSLiveNormalPaidLinkmicAddPriceContent, HTSLiveApplicationReasonContent, HTSLiveDuoBattleConfigContent, HTSLiveLinkmicInitInfoContent, HTSLiveNormalPaidLinkmicDescContent, HTSLiveGuestLinkContent, HTSLiveBidPaidLinkmicSettingContent, HTSLiveInteractActingContent, HTSLiveBidPaidLinkmicContent, HTSLiveNormalPaidLinkmicSettingContent, HTSLiveGuestBattleConfigContent, HTSLiveRoomBattleSettingContent, HTSLiveKTVComponentContent, HTSLiveAudioSubtitleContent, HTSLiveGiftCommentContent, HTSLiveTeamFightConfigContent, HTSLiveSelfDisciplineInfo, HTSLiveChestGameContent, HTSLiveKTVChallengeContent;

@interface HTSLiveSettingContent : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveApplicationReasonContent *applicationReasonContent;
@property (nonatomic) BOOL hasApplicationReasonContent;
@property (retain, nonatomic) HTSLiveBidPaidLinkmicContent *bidPaidLinkmicContent;
@property (nonatomic) BOOL hasBidPaidLinkmicContent;
@property (retain, nonatomic) HTSLiveNormalPaidLinkmicSettingContent *normalPaidLinkmicSettingContent;
@property (nonatomic) BOOL hasNormalPaidLinkmicSettingContent;
@property (retain, nonatomic) HTSLiveNormalPaidLinkmicDescContent *normalPaidLinkmicDescContent;
@property (nonatomic) BOOL hasNormalPaidLinkmicDescContent;
@property (retain, nonatomic) HTSLiveBidPaidLinkmicSettingContent *bidPaidLinkmicSettingContent;
@property (nonatomic) BOOL hasBidPaidLinkmicSettingContent;
@property (retain, nonatomic) HTSLiveKTVChallengeContent *ktvChallengeContent;
@property (nonatomic) BOOL hasKtvChallengeContent;
@property (retain, nonatomic) HTSLiveRoomBattleSettingContent *roomBattleSettingContent;
@property (nonatomic) BOOL hasRoomBattleSettingContent;
@property (retain, nonatomic) HTSLiveNormalPaidLinkmicAddPriceContent *normalPaidLinkmicAddPriceContent;
@property (nonatomic) BOOL hasNormalPaidLinkmicAddPriceContent;
@property (retain, nonatomic) HTSLiveGuestBattleConfigContent *guestBattleConfigContent;
@property (nonatomic) BOOL hasGuestBattleConfigContent;
@property (retain, nonatomic) HTSLiveTeamFightConfigContent *teamFightConfigContent;
@property (nonatomic) BOOL hasTeamFightConfigContent;
@property (retain, nonatomic) HTSLiveSelfDisciplineInfo *selfDisciplineInfo;
@property (nonatomic) BOOL hasSelfDisciplineInfo;
@property (retain, nonatomic) HTSLiveDuoBattleConfigContent *duoBattleConfigContent;
@property (nonatomic) BOOL hasDuoBattleConfigContent;
@property (retain, nonatomic) HTSLiveKTVComponentContent *ktvComponentContent;
@property (nonatomic) BOOL hasKtvComponentContent;
@property (retain, nonatomic) HTSLiveAudioSubtitleContent *audioSubtitleContent;
@property (nonatomic) BOOL hasAudioSubtitleContent;
@property (retain, nonatomic) HTSLiveLinkmicInitInfoContent *linkmicInitInfoContent;
@property (nonatomic) BOOL hasLinkmicInitInfoContent;
@property (retain, nonatomic) HTSLiveGuestLinkContent *guestLinkContent;
@property (nonatomic) BOOL hasGuestLinkContent;
@property (retain, nonatomic) HTSLiveChestGameContent *chestGameContent;
@property (nonatomic) BOOL hasChestGameContent;
@property (retain, nonatomic) HTSLiveGiftCommentContent *giftCommentContent;
@property (nonatomic) BOOL hasGiftCommentContent;
@property (retain, nonatomic) HTSLiveInteractActingContent *interactActingContent;
@property (nonatomic) BOOL hasInteractActingContent;

+ (id)descriptor;

@end
