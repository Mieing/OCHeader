@class PanelBtn, NSString, BattleShellConfig, SpecifyGiftConfig, BattleSelfData, HTSLiveImage, PanelTitle, ProfitGameConfig, CustomConfig;

@interface BattlePanel : IESLivePBBaseMessage

@property (retain, nonatomic) PanelTitle *panelTitle;
@property (nonatomic) BOOL hasPanelTitle;
@property (retain, nonatomic) PanelBtn *panelBtn;
@property (nonatomic) BOOL hasPanelBtn;
@property (nonatomic) BOOL isSelfData;
@property (nonatomic) long long selfOptId;
@property (retain, nonatomic) BattleSelfData *selfData;
@property (nonatomic) BOOL hasSelfData;
@property (nonatomic) int battlePanelType;
@property (retain, nonatomic) BattleShellConfig *shellConfig;
@property (nonatomic) BOOL hasShellConfig;
@property (nonatomic) BOOL isForbidden;
@property (copy, nonatomic) NSString *forbiddenText;
@property (copy, nonatomic) NSString *tagText;
@property (retain, nonatomic) SpecifyGiftConfig *specifyGiftConfig;
@property (nonatomic) BOOL hasSpecifyGiftConfig;
@property (retain, nonatomic) CustomConfig *customConfig;
@property (nonatomic) BOOL hasCustomConfig;
@property (retain, nonatomic) HTSLiveImage *backImg;
@property (nonatomic) BOOL hasBackImg;
@property (retain, nonatomic) ProfitGameConfig *gameConfig;
@property (nonatomic) BOOL hasGameConfig;
@property (copy, nonatomic) NSString *eventTrackingInfo;

+ (id)descriptor;

@end
