@class NSString, NSMutableArray, GameLifeSettingControl_JumpWeappInfo;

@interface GameLifeSettingControl_AppPanel : WXPBGeneratedMessage

@property (nonatomic) unsigned int panelType;
@property (retain, nonatomic) NSString *enterId;
@property (nonatomic) BOOL showRedDot;
@property (nonatomic) unsigned int jumpType;
@property (retain, nonatomic) GameLifeSettingControl_JumpWeappInfo *jumpWeapp;
@property (retain, nonatomic) NSString *jumpUrl;
@property (retain, nonatomic) NSMutableArray *enterWordList;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *darkModeIconUrl;
@property (retain, nonatomic) NSMutableArray *disableWordList;
@property (nonatomic) unsigned int halfScreenHeight;

+ (void)initialize;

- (void)setHalfScreenHeight:(unsigned int)a0;
- (unsigned int)halfScreenHeight;
- (void)setDisableWordList:(id)a0;
- (id)disableWordList;
- (void)setDarkModeIconUrl:(id)a0;
- (id)darkModeIconUrl;
- (void)setIconUrl:(id)a0;
- (id)iconUrl;
- (void)setEnterWordList:(id)a0;
- (id)enterWordList;
- (void)setJumpUrl:(id)a0;
- (id)jumpUrl;
- (void)setJumpWeapp:(id)a0;
- (id)jumpWeapp;
- (void)setJumpType:(unsigned int)a0;
- (unsigned int)jumpType;
- (void)setShowRedDot:(BOOL)a0;
- (BOOL)showRedDot;
- (void)setEnterId:(id)a0;
- (id)enterId;
- (void)setPanelType:(unsigned int)a0;
- (unsigned int)panelType;

@end
